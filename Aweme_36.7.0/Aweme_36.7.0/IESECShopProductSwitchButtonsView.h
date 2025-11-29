@class UIStackView, NSString, UIImageView, NSDictionary, UILabel;
@protocol IESECShopProductSwitchButtonsViewDelegate;

@interface IESECShopProductSwitchButtonsView : UIView {
    NSDictionary *_switchButtonConfigs;
    NSString *_currentType;
}

@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *textLabel;
@property (readonly, copy, nonatomic) NSString *currentType;
@property (weak, nonatomic) id<IESECShopProductSwitchButtonsViewDelegate> delegate;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;

- (void)clickSwitchButton;
- (id)buildButtonBubbleView:(id)a0;
- (void)updateSwitchButton;
- (void).cxx_destruct;
- (id)init;
- (void)setupViews;
- (void)updateWithModel:(id)a0;

@end
