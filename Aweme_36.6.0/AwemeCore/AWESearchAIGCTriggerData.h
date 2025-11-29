@class NSString;

@interface AWESearchAIGCTriggerData : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *triggerTitle;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *logoDark;
@property (copy, nonatomic) NSString *logoLight;
@property (nonatomic) long long logoWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
