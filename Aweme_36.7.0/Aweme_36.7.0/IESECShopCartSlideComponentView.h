@class IESECURLModel, UIImageView, UIVisualEffectView, UIView, UILabel, IESECShopTextLabelItem;

@interface IESECShopCartSlideComponentView : UIView {
    IESECShopTextLabelItem *_model;
    IESECURLModel *_image;
}

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *textLabel;

- (void)updateWithModel:(id)a0 image:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)setupViews;
- (void)updateViews;

@end
