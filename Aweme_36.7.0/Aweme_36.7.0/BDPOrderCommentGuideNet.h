@interface BDPOrderCommentGuideNet : NSObject

+ (id)_parseResponseWithData:(id)a0 error:(id *)a1;
+ (void)checkOrderCanComment:(id)a0 appId:(id)a1 completion:(id /* block */)a2;
+ (void)getOrderCommentList:(id)a0 completion:(id /* block */)a1;

@end
