@class MMUILabel, MMUIImageView;

@interface MMFinderLiveNoticeDetailChooseView : MMUIButton

@property (retain, nonatomic) MMUILabel *topLabel;
@property (retain, nonatomic) MMUILabel *detailLabel;
@property (retain, nonatomic) MMUIImageView *arrowView;
@property (nonatomic) BOOL showArr;

- (void)updateTopContent:(id)a0 detailContent:(id)a1 showArr:(BOOL)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (id)accessibilityLabel;
- (void).cxx_destruct;

@end
