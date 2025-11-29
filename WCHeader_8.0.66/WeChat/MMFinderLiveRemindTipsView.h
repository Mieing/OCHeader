@class UILabel, FinderWindowProductInfo_RemindTips, MMWebImageView;

@interface MMFinderLiveRemindTipsView : UIView

@property (retain, nonatomic) MMWebImageView *imageView;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) FinderWindowProductInfo_RemindTips *info;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)tapGestureAction;
- (void)updateWithInfo:(id)a0;
- (void).cxx_destruct;

@end
