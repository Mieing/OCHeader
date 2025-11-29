@class NSString, NSArray;

@interface AWEECShoppingGuideMessageLinkSectionModel : AWEECShoppingGuideMessageSectionModel

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *prompt;
@property (copy, nonatomic) NSString *jumpSchema;
@property (copy, nonatomic) NSArray *moreInfoData;
@property (nonatomic) long long expandNum;

+ (id)moreInfoDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
