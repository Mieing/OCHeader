@class UIImageView, CAGradientLayer, NSString;

@interface IESLiveStreamAbnormalView : UIView <IESLiveStreamDecorationViewProtocol>

@property (retain, nonatomic) UIImageView *backGroundView;
@property (retain, nonatomic) UIImageView *coffeeImageView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)indexAtDecorationViewHierarchy;
- (void)updateWithContainerView:(id)a0 layoutContainerView:(id)a1 backgroundURL:(id)a2 warningContentURL:(id)a3;
- (void)updateLayoutWithContainer:(id)a0 backgroundURL:(id)a1 warningContentURL:(id)a2;
- (void)updateWithContainerView:(id)a0 layoutContainerView:(id)a1;
- (void)updateWithContainerView:(id)a0;
- (void)updateLayoutWithContainer:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)setupUI;

@end
