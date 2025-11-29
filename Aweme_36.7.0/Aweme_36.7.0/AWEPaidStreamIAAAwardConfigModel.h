@class NSArray, AWEPaidStreamIAAUIConfig, NSString;

@interface AWEPaidStreamIAAAwardConfigModel : AWEBaseApiModel

@property (nonatomic) long long index;
@property (copy, nonatomic) NSArray *awardInfos;
@property (retain, nonatomic) AWEPaidStreamIAAUIConfig *awardUIConfigs;
@property (copy, nonatomic) NSString *reqID;
@property (copy, nonatomic) NSString *recordID;

+ (id)awardInfosJSONTransformer;
+ (id)awardUIConfigsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
