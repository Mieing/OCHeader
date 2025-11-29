@class UIVisualEffectView, IESECShopActivityDynamicComponentModel, UIView, UIImageView, UILabel;
@protocol IESECShopFloatNativeContainerViewDelegate;

@interface IESECShopFloatNativeContainerView : UIView

@property (retain, nonatomic) IESECShopActivityDynamicComponentModel *model;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UILabel *textView;
@property (weak, nonatomic) id<IESECShopFloatNativeContainerViewDelegate> delegate;

- (void).cxx_destruct;
- (id)init;
- (void)setupViews;
- (void)updateWithModel:(id)a0;
- (void)tapAction;

@end
