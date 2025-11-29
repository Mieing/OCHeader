@class NSDictionary, NSString;

@interface AWEInnerPushDisplayDurationConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL enabled;
@property (nonatomic) double globalDuration;
@property (copy, nonatomic) NSDictionary *groupConfigDict;
@property (copy, nonatomic) NSDictionary *typeConfigDict;
@property (copy, nonatomic) NSDictionary *templateIdConfigDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
