@class HTSEventContext, IESLiveToolbarExpandView, IESLiveGCDTimer;
@protocol IESLiveRoomService;

@interface IESLiveToolbarShareSectionStore : NSObject

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveGCDTimer *timer;
@property (retain, nonatomic) IESLiveToolbarExpandView *customItemView;
@property (nonatomic) BOOL canShowFriendsList;
@property (nonatomic) BOOL enableShowFriendAvatar;
@property (nonatomic) BOOL hasShowAnimation;

- (void)startCountDown;
- (void)stopCountDown;
- (void)showAnimationView;
- (id)initWithRoom:(id)a0 trackcontext:(id)a1;
- (id)shareSectionCustomItemView:(id)a0;
- (void)loadThemeIcon:(id)a0;
- (void)storageshareSectionShowed;
- (void)checkEnableShowFriendAvatar;
- (id)shareSectionShowedKey;
- (void)checkCanShowFriendsList;
- (void).cxx_destruct;
- (void)dealloc;

@end
