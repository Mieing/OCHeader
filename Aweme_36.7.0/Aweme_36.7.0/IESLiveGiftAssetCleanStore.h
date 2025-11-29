@class IESLiveGiftAssetCleanConfig, HTSEventContext, IESLiveCountTimer, IESLiveMoreToolsSettingItem, IESLiveComponentContext, IESLivePopupItem, NSString;
@protocol IESLiveRoomService;

@interface IESLiveGiftAssetCleanStore : NSObject

@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveGiftAssetCleanConfig *cleanConfig;
@property (retain, nonatomic) IESLiveCountTimer *resourceStratefyCleanTimer;
@property (retain, nonatomic) IESLiveCountTimer *loadingTimer;
@property (retain, nonatomic) IESLivePopupItem *popupItem;
@property (retain, nonatomic) IESLiveMoreToolsSettingItem *item;
@property (retain, nonatomic) NSString *pushIdentifier;
@property (nonatomic) BOOL isCleaning;
@property (nonatomic) BOOL didClickItem;
@property (copy, nonatomic) NSString *currentShowButtonTitle;

- (void)componentDestroy;
- (void)componentDidMount;
- (id)initWithRoom:(id)a0 context:(id)a1 componentContext:(id)a2;
- (void)registerToolbar;
- (void)launchStrategyHint;
- (void)trackOptGiftCacheClick;
- (void)launchLoadingTimer;
- (void)cleanFinish;
- (void)trackOptGiftCacheShow;
- (void)updateItemButtonTitle;
- (void)pushHintWithAssetSize:(long long)a0;
- (void)pushHint;
- (id)currentShowNumberStr;
- (void).cxx_destruct;
- (void)startLoading;
- (void)stopLoading;

@end
