@class AWEPOIFeedUgcInfoTagContentModel, CAGradientLayer, NSDictionary, UIImageView, AWEPOIUgcInfoInsetsLabel;
@protocol AWEPOIUgcUIModuleHostProtocol;

@interface AWEPOIDetailFeedUgcInfoTagView : UIView

@property (weak, nonatomic) id<AWEPOIUgcUIModuleHostProtocol> delegate;
@property (retain, nonatomic) AWEPOIFeedUgcInfoTagContentModel *model;
@property (copy, nonatomic) NSDictionary *clickRouterParams;
@property (retain, nonatomic) UIImageView *tagIcon;
@property (retain, nonatomic) AWEPOIUgcInfoInsetsLabel *tagLabel;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;

+ (struct CGSize { double x0; double x1; })tagSizeWithModel:(id)a0;

- (void)didClickTag;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)updateWithModel:(id)a0;

@end
