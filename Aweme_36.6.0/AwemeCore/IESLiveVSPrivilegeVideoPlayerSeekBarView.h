@class UIView, HTSEventForwardingView;

@interface IESLiveVSPrivilegeVideoPlayerSeekBarView : UIView

@property (retain, nonatomic) HTSEventForwardingView *playedBarView;
@property (retain, nonatomic) HTSEventForwardingView *toPlayBarView;
@property (retain, nonatomic) UIView *dotButtonView;
@property (nonatomic) BOOL isPanning;
@property (nonatomic) double progress;
@property (nonatomic) double temporaryProgressForPanGesture;
@property (copy, nonatomic) id /* block */ updateProgressForGestureBlock;

- (void)didTapProgress:(id)a0;
- (void)didPanProgress:(id)a0;
- (void).cxx_destruct;
- (void)setup;
- (id)initWithProgress:(double)a0;

@end
