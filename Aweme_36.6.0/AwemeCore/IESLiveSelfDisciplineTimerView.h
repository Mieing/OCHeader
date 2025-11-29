@class UILabel, IESLiveSelfDisciplineTimerViewModel, IESLiveImageView;

@interface IESLiveSelfDisciplineTimerView : IESLiveButton

@property (nonatomic) double scale;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) IESLiveSelfDisciplineTimerViewModel *viewModel;
@property (retain, nonatomic) IESLiveImageView *icon;
@property (nonatomic) unsigned long long timeState;

- (void)bindViewModel;
- (void)onClicked;
- (void)updateViewModel:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 scale:(double)a1 viewModel:(id)a2;
- (void)updateState:(unsigned long long)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupViews;

@end
