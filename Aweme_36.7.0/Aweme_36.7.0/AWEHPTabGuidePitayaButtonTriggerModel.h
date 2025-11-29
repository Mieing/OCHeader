@class NSString;

@interface AWEHPTabGuidePitayaButtonTriggerModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *actionName;
@property (copy, nonatomic) NSString *awemeID;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *triggerSource;
@property (copy, nonatomic) NSString *pitayaTraceID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
