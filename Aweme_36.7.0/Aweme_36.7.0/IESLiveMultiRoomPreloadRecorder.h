@class UIViewController, NSString, IESLiveInnerFeedBaseItemModel, IESLiveInnerFeedContext;

@interface IESLiveMultiRoomPreloadRecorder : NSObject <IESLiveInnerFeedDataControlAction, IESLiveMultiRoomPreloadRecorderService>

@property (weak, nonatomic) UIViewController *innerFeedViewController;
@property (retain, nonatomic) IESLiveInnerFeedContext *context;
@property (retain, nonatomic) IESLiveInnerFeedBaseItemModel *itemModel;
@property (nonatomic) BOOL preloadEnable;
@property (nonatomic) long long preloadStartIndex;
@property (nonatomic) double delayDuration;
@property (nonatomic) unsigned long long blockRoomType;
@property (nonatomic) BOOL blockLandScape;
@property (nonatomic) BOOL scrolling;
@property (nonatomic) BOOL mounting;
@property (nonatomic) long long stayPreloadMaxCount;
@property (nonatomic) long long stayPreloadCount;
@property (nonatomic) long long currentOrientation;
@property (nonatomic) long long lastIndex;
@property (nonatomic) BOOL jumpPreload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)initWithViewController:(id)a0 context:(id)a1;
- (BOOL)isLinkmicRoom:(id)a0;
- (void)didForceUpdateToOrientation:(long long)a0;
- (void)innerFeedDidDisappear;
- (void)innerFeedDataSourceDidChangeWithItems:(id)a0;
- (void)innerFeedMountWithItem:(id)a0;
- (void)innerFeedUnMountWithItem:(id)a0;
- (void)innerFeedComponentAllMounted:(id)a0;
- (void)innerFeedScrollWithItem:(id)a0;
- (void)preloadNextLiveRoom;
- (void)checkPreloadEntity;
- (BOOL)blockRoomTypeWithItemModel:(id)a0;
- (BOOL)isOfficialChannelRoom:(id)a0;
- (void).cxx_destruct;

@end
