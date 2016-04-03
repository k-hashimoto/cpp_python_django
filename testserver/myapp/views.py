from django.shortcuts import render
from django.http import HttpResponse

import pythonWapper

def add(request,a,b):
    result = pythonWapper.add(int(a),int(b))
    html = "<html><body>Result a+b is  %d.</body></html>" % result
    return HttpResponse(html)
