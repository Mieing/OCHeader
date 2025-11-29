@class AWEECOMIMLynxViewViewModel, NSString, AWEECOMIMDebounce, IESIMBulletContainerPreLayoutInfo;

@interface AWEECOMIMLynxCardViewModel : AWEECOMIMBaseMsgModel <IESIMBulletContainerPreloadItemProtocol>

@property (retain, nonatomic) AWEECOMIMLynxViewViewModel *lynxViewViewModel;
@property (retain, nonatomic) AWEECOMIMDebounce *msgUpdateDebounce;
@property (nonatomic) long long preLayoutStatus;
@property (nonatomic) long long fullLoadStatus;
@property (retain, nonatomic) IESIMBulletContainerPreLayoutInfo *preLayoutInfo;
@property (nonatomic) BOOL needSkipPreload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)cellClass;

- (id)msgCommonTrackParams;
- (void)transferSchemaToSkip:(id)a0 andTrackButtonTap:(id)a1 materialName:(id)a2 extParams:(id)a3;
- (void)trackCardButtonTap:(id)a0 materialName:(id)a1 extParams:(id)a2;
- (void)trackCardButtonTap:(id)a0 materialName:(id)a1 extParams:(id)a2 unitBtmId:(id)a3 responder:(id)a4 needSetBcm:(BOOL)a5;
- (void)transferSchemaToSkip:(id)a0 andTrackButtonTap:(id)a1 materialName:(id)a2 extParams:(id)a3 unitBtmId:(id)a4 responder:(id)a5 needSetBcm:(BOOL)a6;
- (BOOL)respondsToServerNotification:(id)a0 uuid:(id)a1 cardType:(id)a2;
- (id)msgDisplayParams;
- (void)updateMessageModel:(id)a0;
- (void)updateForMessageUpdate:(id)a0;
- (BOOL)isPlatformServiceCard;
- (long long)preloadStrategyWithScene:(long long)a0;
- (id)dynamicPatchForPreload;
- (id)bulletContextForPreload;
- (void).cxx_destruct;
- (id)initWithMessage:(id)a0;

@end
