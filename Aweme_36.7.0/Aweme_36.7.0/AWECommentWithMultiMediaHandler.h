@interface AWECommentWithMultiMediaHandler : NSObject

+ (void)generateStudioComment:(id)a0 configData:(id)a1 trackInfo:(id)a2 completion:(id /* block */)a3;
+ (void)createCommentWithParamsModel:(id)a0 trackInfo:(id)a1 effectModel:(id)a2 didEditBlock:(id /* block */)a3 completion:(id /* block */)a4;
+ (id)generateCustomTrakInfoFromParamsModel:(id)a0 trackInfo:(id)a1;
+ (id)generateCommonTrakInfoFromParamsModel:(id)a0 trackInfo:(id)a1;
+ (void)createCommentWithParamsModel:(id)a0 trackInfo:(id)a1 didEditBlock:(id /* block */)a2 completion:(id /* block */)a3;

@end
