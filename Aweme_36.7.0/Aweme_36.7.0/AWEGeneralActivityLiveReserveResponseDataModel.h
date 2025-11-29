@class NSString;

@interface AWEGeneralActivityLiveReserveResponseDataModel : MTLModel <IGListDiffable, MTLJSONSerializing>

@property (nonatomic) long long responseStatus;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *prompts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (void).cxx_destruct;

@end
