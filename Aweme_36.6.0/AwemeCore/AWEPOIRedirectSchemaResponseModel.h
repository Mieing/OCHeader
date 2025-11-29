@class NSString, AWEPOIRedirectSchemaAlertModel;

@interface AWEPOIRedirectSchemaResponseModel : AWEBaseApiModel

@property (nonatomic) long long eventType;
@property (copy, nonatomic) NSString *redirectSchema;
@property (copy, nonatomic) NSString *toastContent;
@property (copy, nonatomic) AWEPOIRedirectSchemaAlertModel *alertInfo;

+ (id)eventTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
