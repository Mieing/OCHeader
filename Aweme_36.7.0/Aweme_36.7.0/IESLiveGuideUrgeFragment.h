@class IESLiveGuideUrgeView, NSString, IESLiveGCDTimer;

@interface IESLiveGuideUrgeFragment : IESLiveGuideComponent <IESLiveGuideUrgeViewDelegate, IESLiveGuideActions>

@property (retain, nonatomic) IESLiveGuideUrgeView *urgeView;
@property (retain, nonatomic) IESLiveGCDTimer *timer;
@property (nonatomic) BOOL didShowUrgeBubble;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentMount;
- (void)openLiveModelDidUpdate:(id)a0;
- (void)loadUrgeViewWithAmount:(unsigned long long)a0 userCount:(unsigned long long)a1;
- (void)trackRewardBubbleShowWithAmount:(long long)a0 userCount:(long long)a1;
- (void)didClickUrgeView;
- (void).cxx_destruct;
- (void)dealloc;

@end
