@class NSArray, NSString;

@interface AWEIMContactCommunityMapModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long communityType;
@property (copy, nonatomic) NSArray *userIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)communityTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
