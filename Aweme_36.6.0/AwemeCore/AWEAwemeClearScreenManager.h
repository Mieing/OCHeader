@class NSString;

@interface AWEAwemeClearScreenManager : NSObject <AWEAwemeClearScreenManagerProtocol>

@property (nonatomic) BOOL isInClearScreen;
@property (nonatomic) BOOL isShowingPinchGuide;
@property (nonatomic) BOOL enterByLongPressPanel;
@property (nonatomic) BOOL enterByJingXuanMore;
@property (nonatomic) BOOL enterByBottomBarBtn;
@property (nonatomic) BOOL enterByBottomBarFixedBtn;
@property (nonatomic) BOOL enterByTabBarBtn;
@property (nonatomic) BOOL enterBySnackbar;
@property (nonatomic) BOOL enterByLongPressSlideUp;
@property (nonatomic) BOOL exitByLongPressPanel;
@property (nonatomic) double enterClearScreenTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareManager;

- (id)commonTrackParams:(id)a0;
- (void)trackerEnterClearScreen:(id)a0 enterMethod:(id)a1 referStr:(id)a2 model:(id)a3;
- (void)trackerExitClearScreen:(id)a0 enterMethod:(id)a1 referStr:(id)a2 model:(id)a3 duration:(long long)a4 exitMethod:(id)a5;
- (long long)getPureModeEntryPosition;
- (long long)getPureModeType;
- (void)trackerExitElementClearScreen:(id)a0 enterMethod:(id)a1 referStr:(id)a2 model:(id)a3 exitMethod:(id)a4;
- (void)resetTracker;

@end
