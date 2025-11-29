@class NSString;

@interface AWELiteShareFeedFissionModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *inviteToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
