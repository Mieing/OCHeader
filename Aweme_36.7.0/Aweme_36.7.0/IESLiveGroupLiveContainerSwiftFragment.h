@class NSArray, IESLiveRightBottomMutuallyExclusiveItem, UIView;

@interface IESLiveGroupLiveContainerSwiftFragment : IESLiveRoomComponent <HTSLiveMessageSubscriber, BDXContainerLifecycleProtocol, IESLivePublicScreenLayoutSubscriber, IESLiveSEIListener, IESLiveGroupLiveCommonContainerInterface> {
    void /* unknown type, empty encoding */ _dragRectRight;
    void /* unknown type, empty encoding */ _dragRectLeft;
    void /* unknown type, empty encoding */ _dragRectTop;
    void /* unknown type, empty encoding */ _dragRectBottom;
    void /* unknown type, empty encoding */ _reactBBottom;
    void /* unknown type, empty encoding */ _marginEdge;
    void /* unknown type, empty encoding */ _userEnterViewHeight;
    void /* unknown type, empty encoding */ controller;
    void /* unknown type, empty encoding */ activityBannerShow;
    void /* unknown type, empty encoding */ shortTouchAreaShow;
    void /* unknown type, empty encoding */ taskBannerShow;
    void /* unknown type, empty encoding */ createTime;
    void /* unknown type, empty encoding */ seiUpdateTs;
    void /* unknown type, empty encoding */ gameEventParams;
}

@property (class, nonatomic, readonly) NSArray *trackerFilterEventNames;

@property (nonatomic) BOOL isLiteMode;
@property (nonatomic, retain) UIView *groupLiveContainerView;
@property (nonatomic, retain) UIView *groupLiveContainerPlaceHolderView;
@property (nonatomic, retain) IESLiveRightBottomMutuallyExclusiveItem *mutuallyExclusiveItem;
@property (nonatomic) BOOL isInsertToRightBottomArea;
@property (nonatomic, readonly) double userEnterViewHeight;
@property (nonatomic, readonly) double topContainerMaxY;

+ (BOOL)componentShouldActive:(id)a0;

- (void)container:(id)a0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)componentBindService;
- (void)componentMount;
- (void)componentUnmount;
- (void)componentOrientationChanged:(long long)a0;
- (void)publicScreenLayoutChanged:(id)a0 forType:(unsigned long long)a1;
- (void)animationForAutoRotateToOrientation:(long long)a0 duration:(double)a1 size:(struct CGSize { double x0; double x1; })a2;
- (long long)getNtpDiffTime;
- (void)setLiteMode:(BOOL)a0;
- (BOOL)getIsInLinkScreenCoRec;
- (void)activityBannerIsOnShow:(BOOL)a0;
- (void)taskBannerIsOnShow:(BOOL)a0;
- (void)shortTouchAreaIsOnShow:(BOOL)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)addRightBottomAreaView:(long long)a0 :(double)a1 :(double)a2;
- (void)hideRightHolderView;
- (double)getDragLeft;
- (double)getScreenHeight;
- (double)getRightBottomAreaBottom;
- (double)getDragRight;
- (double)getDragTop;
- (double)getDragBottom;
- (double)getScreenWidth;
- (void)updatePositionInfo:(double)a0 :(double)a1 :(double)a2 :(double)a3;
- (void)createContainerView:(double)a0 :(double)a1 :(double)a2 :(double)a3;
- (void)destroyContainerView;
- (unsigned long long)supportSeiTypes;
- (void)onParseredWithSEIResult:(id)a0;
- (void)willCommitTrackEvent:(id)a0 params:(id)a1;
- (id)currentMountBusinessInfo;
- (void).cxx_destruct;
- (id)init;
- (void)messageReceived:(id)a0;

@end
