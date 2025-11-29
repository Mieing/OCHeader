@class MMUILabel, UIView;

@interface WARefreshDefaultNoMoreDataLabel : UIView

@property (retain, nonatomic) UIView *lineLeftView;
@property (retain, nonatomic) UIView *lineRightView;
@property (retain, nonatomic) MMUILabel *noMoreTipsLabel;
@property (nonatomic) int lineWordsInterval;

- (id)init;
- (void)layoutSubviews;
- (void)configureLayout;
- (void)updateWords:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)sizeToFit;
- (void).cxx_destruct;

@end
