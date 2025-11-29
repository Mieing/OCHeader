@class NSString;

@interface AWEAwemeAISearchModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL hasAISearchSummary;
@property (nonatomic) BOOL showAIEntrance;
@property (copy, nonatomic) NSString *aiSearchShareSchema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
