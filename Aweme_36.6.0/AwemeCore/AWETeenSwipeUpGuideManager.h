@class LOTAnimationView, UILabel, UIView, UITableView;

@interface AWETeenSwipeUpGuideManager : NSObject

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) LOTAnimationView *playingView;
@property (retain, nonatomic) UITableView *tableView;
@property (nonatomic) struct CGPoint { double x; double y; } originOffSet;
@property (nonatomic) long long repeatCount;
@property (nonatomic) BOOL isShowingGuide;

- (void)p_setupBind;
- (void)showSwipeUpGuideOnTableView:(id)a0;
- (void)dismissSwipeUpGuide;
- (void)p_bindGesture;
- (void)p_beginGuideAnimation;
- (void)p_repeatGuideAnimationIfNeeded;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
