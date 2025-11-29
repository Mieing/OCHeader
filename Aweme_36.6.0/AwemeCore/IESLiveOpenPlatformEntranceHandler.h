@class NSString, HTSLiveToolbarItem, UIImageView, NSMutableArray;
@protocol IESLiveToolbarRoomModule;

@interface IESLiveOpenPlatformEntranceHandler : NSObject <IESLiveAutoRotateAction, HTSLiveMessageSubscriber, IESLiveOpenPlatformEntranceHandlerRouter>

@property (copy, nonatomic) NSString *appId;
@property (retain, nonatomic) HTSLiveToolbarItem *toolbarItem;
@property (copy, nonatomic) id /* block */ showEntranceBlock;
@property (nonatomic) long long currentOrientation;
@property (retain, nonatomic) NSMutableArray *messageArr;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) id<IESLiveToolbarRoomModule> toolBarRoomModule;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDIContext:(id)a0;
- (void)willAutoRotateToOrientation:(long long)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)componentRefresh;
- (void)startPerfSampler;
- (void)stopPerfSampler;
- (void)setupObserve;
- (void)handleOrientationChanged:(long long)a0;
- (void)prepareShowEntranceItem:(id)a0 block:(id /* block */)a1;
- (void)showEntrance:(id)a0;
- (void)showEntrance:(id)a0 enterFrom:(id)a1;
- (void)hideEntrance:(id)a0;
- (BOOL)isEntranceVisiable;
- (void)receiveShowEntranceResult:(BOOL)a0;
- (BOOL)enableComponentPreload:(BOOL)a0;
- (void)_setupToolbarItem:(id)a0;
- (void)dispatchEntranceMessage:(id)a0;
- (void)_trackEntranceShowWithSource:(id)a0 appID:(id)a1;
- (void)getCustomEntranceVision;
- (long long)getVisionTypeFromToolbarExtra;
- (id)getVisionIconUrlFromToolbarExtra;
- (void)setDefaultEntranceVisionIcon:(id)a0;
- (void)_trackEntranceClickWithSource:(id)a0 appID:(id)a1;
- (void)_monitorEntranceClickWithLocation:(id)a0;
- (id)imageByAddingTransparentBorderToImage:(id)a0 borderWidth:(double)a1;
- (void).cxx_destruct;
- (void)_clean;
- (void)messageReceived:(id)a0;

@end
