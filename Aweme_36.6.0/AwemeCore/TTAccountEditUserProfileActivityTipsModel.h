@class NSString, NSArray;

@interface TTAccountEditUserProfileActivityTipsModel : TTAccountBaseEntity

@property (nonatomic) long long status;
@property (copy, nonatomic) NSString *pendantUrl;
@property (nonatomic) BOOL hasArrow;
@property (copy, nonatomic) NSString *popupSchema;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSArray *contentFormats;
@property (copy, nonatomic) NSString *buttonName;
@property (copy, nonatomic) NSString *pendantId;
@property (copy, nonatomic) NSString *pendantActivityId;

+ (id)modelContainerPropertyGenericClass;
+ (unsigned long long)modelCustomMappingOptions;

- (void).cxx_destruct;

@end
