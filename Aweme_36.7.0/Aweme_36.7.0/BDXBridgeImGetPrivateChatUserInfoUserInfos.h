@class NSString;

@interface BDXBridgeImGetPrivateChatUserInfoUserInfos : BDXBridgeModel

@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *avatarUrl;
@property (nonatomic) BOOL isSelf;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
