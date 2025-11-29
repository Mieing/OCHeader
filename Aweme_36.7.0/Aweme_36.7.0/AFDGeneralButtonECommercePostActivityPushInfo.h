@class NSString;

@interface AFDGeneralButtonECommercePostActivityPushInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *actionTitle;
@property (copy, nonatomic) NSString *activityUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
