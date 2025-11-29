@interface MMTryCatchWrapper : NSObject

+ (id)runBlockWithTryCatch:(id /* block */)a0;
+ (id)runWithConfig:(id)a0 scheme:(id)a1 schemeHandler:(id)a2;
+ (id)runWithTask:(id)a0 sessionTask:(id)a1 error:(id)a2;
+ (id)runWithTask:(id)a0 didReceiveResponse:(id)a1;
+ (id)runWithTask:(id)a0 didReceiveData:(id)a1;

@end
