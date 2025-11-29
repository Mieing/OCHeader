@interface IESLLTempoResourceLoader : NSObject

+ (id)cdnHost;
+ (void)asyncLoadResourceWithUrl:(id)a0 completionQueue:(id)a1 complete:(id /* block */)a2;
+ (id)decodeData:(id)a0 geckoVersion:(unsigned long long)a1 error:(id *)a2;
+ (id)loadResourceWithPrefix:(id)a0 channel:(id)a1 bundle:(id)a2 error:(id *)a3;
+ (id)syncLoadResourceWithUrl:(id)a0 error:(id *)a1;
+ (id)shared;

@end
