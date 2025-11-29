@class NSString, AWEStickerCommerceEnterView;

@interface AWEStickerApplyCommerceEnteranceStickerHandler : AWEStickerApplyBaseHandler

@property (retain, nonatomic) AWEStickerCommerceEnterView *commerceEnterView;
@property (retain, nonatomic) NSString *lastCommerceEnterEffectID;

- (void)camera:(id)a0 willApplySticker:(id)a1 propSource:(long long)a2;
- (void)onCommerceEnterButton:(id)a0;
- (void)didChangeLayoutManager:(id)a0;
- (void).cxx_destruct;

@end
