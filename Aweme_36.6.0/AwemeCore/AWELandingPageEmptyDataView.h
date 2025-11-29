@class UIImageView, UILabel;

@interface AWELandingPageEmptyDataView : UIView

@property (retain, nonatomic) UIImageView *emptyImageView;
@property (retain, nonatomic) UILabel *mainLabel;
@property (retain, nonatomic) UILabel *subLabel;

- (id)initWithImageName:(id)a0 title:(id)a1 desc:(id)a2 placeHolder:(id)a3;
- (void).cxx_destruct;
- (void)setupUI;

@end
