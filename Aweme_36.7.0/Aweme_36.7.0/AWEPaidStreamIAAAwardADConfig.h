@class NSArray, AWEPaidStreamIAAUIConfig, NSString;

@interface AWEPaidStreamIAAAwardADConfig : AWEBaseApiModel

@property (copy, nonatomic) NSArray *sendAwardConfigList;
@property (retain, nonatomic) AWEPaidStreamIAAUIConfig *UIConfig;
@property (copy, nonatomic) NSString *adAwardKey;
@property (copy, nonatomic) NSString *reqID;
@property (copy, nonatomic) NSString *recordID;

+ (id)sendAwardConfigListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
