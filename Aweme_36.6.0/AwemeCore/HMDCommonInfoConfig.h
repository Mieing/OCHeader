@class HMDBugfixSwitches;

@interface HMDCommonInfoConfig : HMDBaseConfig

@property long long CPUFreq;
@property (retain) HMDBugfixSwitches *bugfixSwitches;

+ (id)hmd_attributeMapDictionary;

- (void).cxx_destruct;

@end
