@class NSString, NSDictionary, UIView;
@protocol BDASplashCommonRenderDelegate;

@interface BDASplashCommonRenderConfig : NSObject

@property (weak, nonatomic) id<BDASplashCommonRenderDelegate> delegate;
@property (copy, nonatomic) NSString *renderData;
@property (copy, nonatomic) NSDictionary *globalProps;
@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) long long complianceType;
@property (nonatomic) long long isHotLaunch;
@property (nonatomic) long long templateLoadAsync;

- (void).cxx_destruct;

@end
