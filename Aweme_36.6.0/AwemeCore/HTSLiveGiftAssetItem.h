@class NSString;
@protocol HTSLiveMyAssetActions;

@interface HTSLiveGiftAssetItem : HTSLiveGiftItem

@property (retain, nonatomic) id<HTSLiveMyAssetActions> actionCreator;
@property (retain, nonatomic) NSString *clickURLString;

- (id)initWithDomainModel:(id)a0 attachingDIContext:(id)a1;
- (id)_getAssetSchemaURL:(id)a0;
- (void)updateSubtitleStyle:(id)a0;
- (BOOL)hideComboAfterSend;
- (void)selectFailed;
- (unsigned long long)selectFailedType;
- (void)updateAsset:(id)a0;
- (id)giftItemModelId;
- (BOOL)isFreeGift;
- (id)giftGroupInfo;
- (void).cxx_destruct;
- (void)select;
- (void)deselect;
- (BOOL)canSelect;

@end
