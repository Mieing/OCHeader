@class UILabel;

@interface AWELiveWorkRightEntranceView : UIView

@property (retain, nonatomic) UILabel *playBackTitle;
@property (retain, nonatomic) UILabel *dataLabel;
@property (retain, nonatomic) UILabel *playNumber;

- (void)setupDataWithModel:(id)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)updateWithConfig:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
