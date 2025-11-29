@class IESUserFeatureInfo;

@interface IESUserInfoFeatures : NSObject

@property (retain, nonatomic) IESUserFeatureInfo *info;

- (void)trackEvent:(unsigned long long)a0 withParams:(id)a1;
- (BOOL)fillFeatures:(id)a0 withConfig:(id)a1 inputData:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
