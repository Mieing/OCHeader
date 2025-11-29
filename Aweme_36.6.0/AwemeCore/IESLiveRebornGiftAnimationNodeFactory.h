@class NSMutableDictionary;
@protocol IESLiveRoomService;

@interface IESLiveRebornGiftAnimationNodeFactory : NSObject

@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (nonatomic) BOOL isBigScale;
@property (retain, nonatomic) NSMutableDictionary *flymicCache;
@property (nonatomic) BOOL enableAggregateBigGiftTray;
@property (nonatomic) BOOL giftImageFormatUseWebp;
@property (nonatomic) BOOL trayGroupModeServerControl;
@property (nonatomic) unsigned long long scene;

- (id)initWithRoomModel:(id)a0;
- (id)nodeWithMessage:(id)a0;
- (id)fakeNodeWithParamModel:(id)a0;
- (BOOL)enableAggregateBigGiftTrayWithGroupMode:(int)a0;
- (id)buildNodeWithGiftMessage:(id)a0 split:(BOOL)a1;
- (id)buildNodeWithBindingMessage:(id)a0;
- (id)buildNodeWithAssetMessage:(id)a0;
- (id)buildNodeWithFunctionalAssetMessage:(id)a0;
- (id)buildNodeWithLightGiftMessage:(id)a0;
- (id)buildGiftBaseInfoFor:(id)a0 gift:(id)a1 type:(unsigned long long)a2;
- (id)combineBaseInfo:(id)a0 videoInfo:(id)a1 giftMessage:(id)a2 giftModel:(id)a3 comboKey:(id)a4;
- (id)giftMessageComboKeyWithBaseInfo:(id)a0;
- (id)buildLightGiftMessageNode:(id)a0 videoInfo:(id)a1 giftInfo:(id)a2 giftModel:(id)a3;
- (void)initTypeForNode:(id)a0 giftModel:(id)a1 sendTogether:(id)a2;
- (id)transformToNativeAnimUser:(id)a0;
- (id)flymicConfigForGift:(id)a0;
- (id)trayBaseImgWithTrayInfo:(id)a0;
- (id)buildAttributedString:(id)a0 toUserName:(id)a1 giftName:(id)a2 withDisplayText:(id)a3;
- (void).cxx_destruct;

@end
