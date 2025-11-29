@class NSOperationQueue, UIView, APayLoadView;

@interface APayNetwork : NSObject

@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) APayLoadView *loadView;
@property (retain, nonatomic) UIView *maskView;

+ (id)defaultClient;

- (void)postWithUrl:(id)a0 headerDict:(id)a1 paramData:(id)a2 success:(id /* block */)a3 failure:(id /* block */)a4;
- (id)requestWithUrl:(id)a0 headerDict:(id)a1 paramData:(id)a2;
- (void).cxx_destruct;
- (void)setUrl:(id)a0;
- (id)init;

@end
