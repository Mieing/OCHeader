@class ACCStickerBlockApplyPredicate;

@interface AWEStickerApplyUnifyAIGCPropHandler : AWEStickerApplyBaseHandler

@property (nonatomic) BOOL shouldHandleProp;
@property (nonatomic) BOOL markComponentDidAppear;
@property (retain, nonatomic) ACCStickerBlockApplyPredicate *predicate;

- (void)componentDidAppear;
- (id)publishModel;
- (void)camera:(id)a0 didRecvMessage:(id)a1;
- (void)camera:(id)a0 didApplySticker:(id)a1 success:(BOOL)a2;
- (void)handlerDidBecomeActive;
- (BOOL)shouldApplyProp:(id)a0;
- (id)decodeArg3:(id)a0;
- (void)handleMessageIfNeeded:(id)a0;
- (void)handleMessageOfAIGCRecord:(id)a0;
- (void).cxx_destruct;

@end
