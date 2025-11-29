@class NSDictionary, NSString, UIView;

@interface IESECMarketingView : LynxUI

@property (retain, nonatomic) UIView *containerView;
@property (copy, nonatomic) NSDictionary *bizParams;
@property (copy, nonatomic) NSString *pageData;
@property (copy, nonatomic) NSString *pageId;
@property (nonatomic) BOOL loadSuccess;

+ (id)__lynx_prop_config__380;
+ (id)__lynx_prop_config__541;

- (void)layoutDidFinished;
- (void)data:(id)a0 requestReset:(BOOL)a1;
- (void)updateUISize:(struct CGSize { double x0; double x1; })a0;
- (void)loadEcMarketing;
- (void)lynxviewDidFirstScreen:(id)a0;
- (void)bizParams:(id)a0 requestReset:(BOOL)a1;
- (void).cxx_destruct;
- (id)createView;

@end
