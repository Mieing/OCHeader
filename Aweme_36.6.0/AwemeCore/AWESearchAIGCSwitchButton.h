@class NSString;

@interface AWESearchAIGCSwitchButton : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *foldId;
@property (copy, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
