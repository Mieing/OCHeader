@class NSString, NSDictionary;

@interface AWESSCollegeSummaryEntranceDataModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *normalTitle;
@property (copy, nonatomic) NSString *expandedTitle;
@property (copy, nonatomic) NSString *entranceIconLightURL;
@property (copy, nonatomic) NSString *entranceIconDarkURL;
@property (copy, nonatomic) NSString *closeIconLightURL;
@property (copy, nonatomic) NSString *closeIconDarkURL;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSDictionary *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
