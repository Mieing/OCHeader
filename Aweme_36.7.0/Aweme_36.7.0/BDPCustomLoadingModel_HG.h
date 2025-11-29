@class BDPCustomLoadingIconConfig, NSString, BDPCustomLoadingTextConfig, BDPCustomLoadingMaterialConfig, BDPCustomLoadingProgressConfig;

@interface BDPCustomLoadingModel_HG : NSObject

@property (nonatomic) float totalLaunchTime;
@property (nonatomic) float designWidth;
@property (nonatomic) float designHeight;
@property (copy, nonatomic) NSString *scaleMode;
@property (retain, nonatomic) BDPCustomLoadingTextConfig *textConfig;
@property (retain, nonatomic) BDPCustomLoadingProgressConfig *barConfig;
@property (retain, nonatomic) BDPCustomLoadingIconConfig *iconConfig;
@property (retain, nonatomic) BDPCustomLoadingMaterialConfig *materialConfig;

+ (id)modelContainerPropertyGenericClass;

- (void).cxx_destruct;

@end
