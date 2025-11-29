@class CAGradientLayer, NSString, UIScrollView, UILabel;

@interface CJPayStandardAlertMessageView : UIView <UIScrollViewDelegate>

@property (retain, nonatomic) UIScrollView *messageScrollView;
@property (retain, nonatomic) UILabel *messageLabel;
@property (retain, nonatomic) CAGradientLayer *topGradientLayer;
@property (retain, nonatomic) CAGradientLayer *bottomGradientLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_makeUI;
- (void)p_configScrollViewBounces;
- (void)p_configTextAlignment;
- (void)p_configGradientLayer:(id)a0;
- (void)p_configGradientLayerFrame;
- (void).cxx_destruct;
- (id)init;
- (void)scrollViewDidScroll:(id)a0;
- (void)layoutSubviews;

@end
