@class UILabel, AWELiveFeedLabelInfoModel;

@interface AWESearchLiveAssistLabel : UIView

@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) AWELiveFeedLabelInfoModel *infoModel;

- (void)updateModel:(id)a0 withAssistText:(id)a1;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateModel:(id)a0;

@end
