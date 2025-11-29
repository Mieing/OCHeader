@class NSString;

@interface AFDFamiliarActivityModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *activityID;
@property (copy, nonatomic) NSString *schemaUrl;
@property (copy, nonatomic) NSString *followText;
@property (nonatomic) double endTime;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
