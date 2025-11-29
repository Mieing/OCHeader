@class NSArray;

@interface HMDALogAttributionSettings : HMDBaseConfig

@property (copy, nonatomic) NSArray *allowedScenes;
@property (nonatomic) BOOL enableOpen;

+ (id)hmd_attributeMapDictionary;

- (void).cxx_destruct;

@end
