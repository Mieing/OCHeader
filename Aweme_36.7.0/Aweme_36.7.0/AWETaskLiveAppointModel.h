@class NSString, NSDictionary;

@interface AWETaskLiveAppointModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSDictionary *lynxRawData;
@property (copy, nonatomic) NSString *lynxButtonTemplateSchema;
@property (nonatomic) long long showLearnMoreAfterSeconds;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
