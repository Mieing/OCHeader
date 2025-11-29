@class MMUILabel, NSString, MMUIView, UIButton;

@interface MMFinderLiveNewAnchorTaskRewardView : MMUIView

@property (retain, nonatomic) MMUILabel *completeTitleLabel;
@property (retain, nonatomic) MMUILabel *completeRewardLabel;
@property (retain, nonatomic) UIButton *completeDetailButton;
@property (retain, nonatomic) MMUIView *leftShapes;
@property (retain, nonatomic) MMUIView *rightShapes;
@property (copy, nonatomic) id /* block */ jumpRewardHomeBlock;
@property (retain, nonatomic) NSString *reward;
@property (nonatomic) BOOL shouldShowBtn;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;
- (void)setupCompleteUI;
- (void)setupShapes;
- (void)layoutUI;
- (void)layoutCompleteUI;
- (void)layoutShapes;
- (void)onCompleteButtonClicked;
- (void).cxx_destruct;

@end
