@class NSArray, NSString;

@interface AWEGuideLimitModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long id;
@property (nonatomic) long long position;
@property (copy, nonatomic) NSArray *relyIDs;
@property (copy, nonatomic) NSArray *limitActions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)limitActionsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
