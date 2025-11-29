@class NSString;

@interface AWEShareReflowIncentiveChatUserModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *avatarURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
