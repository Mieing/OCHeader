@class NSDictionary, AWESearchNoResultModel, UIImageView, UILabel, UIButton;

@interface AWESearchMerchandiseNoResultView : UIView

@property (retain, nonatomic) AWESearchNoResultModel *model;
@property (retain, nonatomic) NSDictionary *publicTrackParams;
@property (retain, nonatomic) UIImageView *emptyImage;
@property (retain, nonatomic) UILabel *noResultLabel;
@property (retain, nonatomic) UIButton *redirectButton;

- (void)configureUI;
- (void)jumpToMerchandisePage:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateWithModel:(id)a0;

@end
