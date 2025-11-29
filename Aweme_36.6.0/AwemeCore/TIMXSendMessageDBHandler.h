@class TIMXSendMessageOrderIndexFixer, TIMXSDKInstance;

@interface TIMXSendMessageDBHandler : NSObject

@property (weak, nonatomic) TIMXSDKInstance *r;
@property (retain, nonatomic) TIMXSendMessageOrderIndexFixer *orderIndexFixer;

- (id /* block */)dbOperationWithContext_douyin:(id)a0 type:(unsigned long long)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
