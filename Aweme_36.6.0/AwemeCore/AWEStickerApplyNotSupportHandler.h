@class ACCStickerBlockApplyPredicate;

@interface AWEStickerApplyNotSupportHandler : AWEStickerApplyBaseHandler

@property (retain, nonatomic) ACCStickerBlockApplyPredicate *predicate;

- (void)camera:(id)a0 didApplySticker:(id)a1 success:(BOOL)a2;
- (void)handlerDidBecomeActive;
- (BOOL)shouldApplyProp:(id)a0;
- (void).cxx_destruct;

@end
