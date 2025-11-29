@class IESLiveSeekProgressIndicatorForMatch, MASConstraint, IESLiveSeekProgressIndicator;

@interface IESLiveSeekProgressBar : UIView

@property (nonatomic) double progressWidth;
@property (nonatomic) double progress;
@property (nonatomic) BOOL isPaning;
@property (nonatomic) double tmpProgress;
@property (nonatomic) double touchBeginProgress;
@property (retain, nonatomic) IESLiveSeekProgressIndicator *progressIndicator;
@property (retain, nonatomic) IESLiveSeekProgressIndicatorForMatch *matchProgressIndicator;
@property (copy, nonatomic) id /* block */ seekAction;
@property (retain, nonatomic) MASConstraint *leadingConstraint;
@property (retain, nonatomic) MASConstraint *trailingConstraint;

- (void)loadSubviews;
- (void)updateWithOrientation:(BOOL)a0;
- (void)remakeConstraintsWithOrientation:(BOOL)a0;
- (void)handleIndicatorNodesHidden:(BOOL)a0;
- (void)didPanGrogress:(id)a0;
- (double)seekPointHeight;
- (void)didTapProgress:(id)a0;
- (void)execSeekAction:(double)a0 source:(unsigned long long)a1 needSeek:(BOOL)a2;
- (void).cxx_destruct;
- (id)init;
- (void)updateWithProgress:(double)a0;

@end
