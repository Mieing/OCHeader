@class NSString;

@interface AFDVisitorOfflineTextSettingsModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *descText;
@property (copy, nonatomic) NSString *btnText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
