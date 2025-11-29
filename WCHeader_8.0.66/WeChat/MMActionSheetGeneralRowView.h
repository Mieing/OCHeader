@class UIView, UIImageView, MMWebImageView, UILabel, UIButton;

@interface MMActionSheetGeneralRowView : MMUIView

@property (retain, nonatomic) UIButton *backgroundButton;
@property (retain, nonatomic) MMWebImageView *iconImageView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIView *titleLabelContainer;
@property (nonatomic) unsigned long long subtitlePosition;
@property (copy, nonatomic) id /* block */ tapHandler;

+ (double)rowViewHeight;

- (id)initWithTitle:(id)a0 subTitle:(id)a1 iconUrl:(id)a2 iconImage:(id)a3 tapHandler:(id /* block */)a4;
- (id)initWithTitle:(id)a0 subTitle:(id)a1 iconUrl:(id)a2 iconImage:(id)a3 subtitlePosition:(unsigned long long)a4 tapHandler:(id /* block */)a5;
- (void)setupAllSubviewsWithTitle:(id)a0 subTitle:(id)a1 iconUrl:(id)a2 iconImage:(id)a3;
- (void)layoutSubviews;
- (void)onTapped;
- (void).cxx_destruct;

@end
