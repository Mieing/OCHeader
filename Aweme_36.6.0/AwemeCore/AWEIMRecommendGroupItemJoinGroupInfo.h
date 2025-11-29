@class NSDictionary, NSString;

@interface AWEIMRecommendGroupItemJoinGroupInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSDictionary *joinGroupExt;
@property (nonatomic) long long secretType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
