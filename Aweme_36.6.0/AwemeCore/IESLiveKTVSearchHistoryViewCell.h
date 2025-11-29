@class UIButton;

@interface IESLiveKTVSearchHistoryViewCell : IESLiveKTVSearchViewCell

@property (retain, nonatomic) UIButton *actionButton;
@property (copy, nonatomic) id /* block */ actionBlock;

+ (struct CGSize { double x0; double x1; })sizeForCellWithModel:(id)a0 scaleRatio:(long long)a1;

- (void)renderWith:(id)a0 scaleRatio:(long long)a1;
- (void)didClickedAction;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
