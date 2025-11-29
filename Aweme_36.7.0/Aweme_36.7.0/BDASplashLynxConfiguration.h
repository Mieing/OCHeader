@class NSDictionary;
@protocol BDASplashComplianceBaseDelegate;

@interface BDASplashLynxConfiguration : NSObject

@property (copy, nonatomic) NSDictionary *lynxConfig;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (weak, nonatomic) id<BDASplashComplianceBaseDelegate> delegate;
@property (copy, nonatomic) NSDictionary *lynxExtraData;
@property (copy, nonatomic) NSDictionary *clickExtra;
@property (copy, nonatomic) NSDictionary *clickAdExtraData;
@property (nonatomic) long long complianceType;

- (void).cxx_destruct;

@end
