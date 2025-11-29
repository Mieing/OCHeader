@class NSString;

@interface AWEEntertainmentCaptionModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *lightIcon;
@property (copy, nonatomic) NSString *darkIcon;
@property (copy, nonatomic) NSString *componentID;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *businessID;
@property (copy, nonatomic) NSString *activityName;
@property (copy, nonatomic) NSString *captionType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
