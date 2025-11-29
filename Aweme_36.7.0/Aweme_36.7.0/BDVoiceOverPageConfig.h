@class NSString, NSArray;

@interface BDVoiceOverPageConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *pageName;
@property (retain, nonatomic) NSArray *rules;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)rulesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
