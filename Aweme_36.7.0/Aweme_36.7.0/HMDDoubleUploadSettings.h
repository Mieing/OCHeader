@class NSArray;

@interface HMDDoubleUploadSettings : HMDBaseConfig

@property (nonatomic) BOOL enableOpen;
@property (copy, nonatomic) NSArray *hostAndPath;
@property (copy, nonatomic) NSArray *allowList;

+ (id)hmd_attributeMapDictionary;

- (void).cxx_destruct;

@end
