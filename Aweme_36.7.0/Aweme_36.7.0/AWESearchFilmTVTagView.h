@class CAGradientLayer, NSString, UIImageView, UILabel;

@interface AWESearchFilmTVTagView : UIView <AWESearchFilmTVTagViewProtocol>

@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) CAGradientLayer *tagBackgroundLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupControl;
- (void)configWithSourceModel:(id)a0;
- (void)configWithTag:(id)a0 lightTag:(id)a1;
- (void)configTagViewWithSourceModel:(id)a0;
- (void)configStatusLabel:(id)a0;
- (void)configWithTagName:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
