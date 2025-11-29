@class NSArray, NSString;

@interface AFDRelationListSingleModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long relationType;
@property (retain, nonatomic) NSArray *uids;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)relationTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
