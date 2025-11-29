@class UILabel, UIImageView, AWEVideoTagModel;

@interface AWESearchLiveInfoView : UIView

@property (retain, nonatomic) AWEVideoTagModel *tagModel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIImageView *iconImg;

- (id)accessibilityLabel;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateModel:(id)a0;

@end
