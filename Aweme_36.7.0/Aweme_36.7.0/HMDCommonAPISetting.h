@class NSArray;

@interface HMDCommonAPISetting : HMDBaseConfig

@property (copy, nonatomic) NSArray *hosts;
@property (nonatomic) BOOL enableEncrypt;

+ (id)hmd_attributeMapDictionary;

- (void).cxx_destruct;

@end
