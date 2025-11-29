@class ACCChapterMediaTimelineActionView;
@protocol ACCChapterPointsEditBottomViewDelegate;

@interface ACCChapterPointsEditBottomView : UIView

@property (retain, nonatomic) ACCChapterMediaTimelineActionView *leftButton;
@property (retain, nonatomic) ACCChapterMediaTimelineActionView *rightButton;
@property (nonatomic) long long status;
@property (weak, nonatomic) id<ACCChapterPointsEditBottomViewDelegate> delegate;

- (void)initTwoButtonUI;
- (void)handleLeftActionViewClick;
- (void)handleRightActionViewClick;
- (void)initOneButtonUI;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
