@class NSString, UIImageView, AWEAwemeModel, UILabel;

@interface AWEXiGuaFeedEntryView : UIView

@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *referString;

- (void)configureUI;
- (void)viewTapped;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
