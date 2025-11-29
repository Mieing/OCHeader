@class NSString, NSDictionary;

@interface AWEUndertakeActionFeedBottomBanner : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *iconPic;
@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *descriptionText;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *actionSchema;
@property (nonatomic) double duration;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
