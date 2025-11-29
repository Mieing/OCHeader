@class NSString, AWEUGCapsuleGradientModel;

@interface AWEUGCapsuleModel : NSObject

@property (copy, nonatomic) NSString *capsuleBGColor;
@property (copy, nonatomic) NSString *capsuleBoderColor;
@property (nonatomic) double capsuleBoderWidth;
@property (retain, nonatomic) AWEUGCapsuleGradientModel *gradient;

- (void).cxx_destruct;

@end
