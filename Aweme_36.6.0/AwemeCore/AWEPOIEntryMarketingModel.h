@class NSNumber, NSString;

@interface AWEPOIEntryMarketingModel : AWEPOIEntryModel

@property (copy, nonatomic) NSNumber *activityID;
@property (copy, nonatomic) NSString *schemaURL;
@property (copy, nonatomic) NSString *cityCode;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
