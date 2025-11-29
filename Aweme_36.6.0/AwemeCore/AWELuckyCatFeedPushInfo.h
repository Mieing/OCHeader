@class NSString, NSDictionary, NSNumber;

@interface AWELuckyCatFeedPushInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *toast;
@property (copy, nonatomic) NSString *icon;
@property (copy, nonatomic) NSString *btnText;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSDictionary *titleConfig;
@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) NSDictionary *contentConfig;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) unsigned long long duration;
@property (copy, nonatomic) NSString *activityName;
@property (copy, nonatomic) NSString *position;
@property (copy, nonatomic) NSString *bodyExtra;
@property (retain, nonatomic) NSNumber *priority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
