@class IESIMBulletContainerPreLayoutInfo, AWEECOMIMBaseMsgModel, NSDictionary, IESIMBulletContainerReuseContext, NSString, IESIMBulletContainerContext, AWEECOMIMDetailPlatformDynamicCardConfigItemModel;
@protocol IESIMDynamicPatchModelProtocol;

@interface AWEECOMIMLynxViewViewModel : NSObject <IESIMBulletContainerPreloadItemProtocol>

@property (weak, nonatomic) AWEECOMIMBaseMsgModel *msgModel;
@property (retain, nonatomic) IESIMBulletContainerContext *containerContext;
@property (copy, nonatomic) NSDictionary *storeCardSize;
@property (nonatomic) struct CGSize { double width; double height; } cardSize;
@property (retain, nonatomic) id<IESIMDynamicPatchModelProtocol> dynamicPatch;
@property (readonly, copy, nonatomic) NSDictionary *staticCardData;
@property (retain, nonatomic) IESIMBulletContainerReuseContext *reuseContext;
@property (copy, nonatomic) NSString *platformServiceMessageID;
@property (copy, nonatomic) NSString *platformServiceCardType;
@property (copy, nonatomic) NSString *platformServiceCardSubType;
@property (copy, nonatomic) NSString *platformServiceUIDL;
@property (copy, nonatomic) NSString *platformServiceMessageDecode;
@property (nonatomic) BOOL cspMsgNeedDecode;
@property (copy, nonatomic) NSDictionary *messageExtForPlatformService;
@property (copy, nonatomic) NSString *cardType;
@property (copy, nonatomic) NSString *tccConfigKey;
@property (nonatomic) BOOL cacheSizeToKV;
@property (nonatomic) BOOL adjustPositionAfterUpdateSize;
@property (nonatomic) BOOL enableSetExtToServerData;
@property (retain, nonatomic) AWEECOMIMDetailPlatformDynamicCardConfigItemModel *platformDynamicCardConfigModel;
@property (nonatomic) unsigned long long cardStyle;
@property (copy, nonatomic) id /* block */ refreshBlock;
@property (copy, nonatomic) id /* block */ adjustPositionBlock;
@property (nonatomic) unsigned long long updateType;
@property (nonatomic) BOOL hasBackupTemplateCard;
@property (nonatomic) BOOL delayUpdate;
@property (nonatomic) long long preLayoutStatus;
@property (nonatomic) long long fullLoadStatus;
@property (retain, nonatomic) IESIMBulletContainerPreLayoutInfo *preLayoutInfo;
@property (nonatomic) BOOL needSkipPreload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)conversationStatus;
- (id)lynxCardSchema;
- (BOOL)isPlatformServiceCard;
- (void)updateCardSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithMsgModel:(id)a0;
- (BOOL)isPlatformDynamicCard;
- (void)updateWithMsgModel:(id)a0;
- (BOOL)refreshCardForLoneConnectionWithUUID:(id)a0;
- (long long)preloadStrategyWithScene:(long long)a0;
- (id)dynamicPatchForPreload;
- (id)bulletContextForPreload;
- (id)_buildDynamicPatch;
- (id)_buildClientData;
- (BOOL)_bulletViewAlreadyInReusePool;
- (id)_buildContainerContext;
- (struct CGSize { double x0; double x1; })lynxDefaultSize;
- (void)didCustomInitWithMsgModel:(id)a0;
- (id)_buildReuseContext;
- (struct CGSize { double x0; double x1; })_getCardSize:(id)a0 message:(id)a1;
- (id)_constructRawDataStorage:(id)a0;
- (id)platformDynamicLynxCardScheme;
- (BOOL)_canPreLayoutBulletCard;
- (BOOL)_canPreloadBulletCard;
- (void).cxx_destruct;
- (id)dataIdentifier;

@end
