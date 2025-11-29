@class AWEOriginStickerUserView, IESEffectModel, NSMutableDictionary;

@interface AWEStickerApplyCommerceStickerHandler : AWEStickerApplyBaseHandler

@property (retain, nonatomic) IESEffectModel *selectedSticker;
@property (retain, nonatomic) NSMutableDictionary *cachedCommerceStickerDict;
@property (retain, nonatomic) NSMutableDictionary *cachedUserDict;
@property (retain, nonatomic) AWEOriginStickerUserView *originStickerUserView;

- (void)camera:(id)a0 willApplySticker:(id)a1 propSource:(long long)a2;
- (void)p_configOriginCreatorWithProp:(id)a0;
- (void).cxx_destruct;

@end
