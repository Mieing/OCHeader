@class IESLiveUserCardStore, CAGradientLayer, IESLiveProfileTagContent;

@interface IESLiveUserCardTagView : UIView

@property (retain, nonatomic) IESLiveProfileTagContent *profileTagContent;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) IESLiveUserCardStore *store;

- (id)initWithProfileTagContent:(id)a0;
- (id)attributesWith:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupView;

@end
