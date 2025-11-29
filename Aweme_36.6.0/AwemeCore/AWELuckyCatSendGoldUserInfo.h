@class NSString, AWEUserModel;

@interface AWELuckyCatSendGoldUserInfo : AWEBaseApiModel

@property (copy, nonatomic) NSString *reqID;
@property (retain, nonatomic) AWEUserModel *userModel;
@property (nonatomic) unsigned long long userProcessStatus;
@property (nonatomic) unsigned long long userFollowStatus;
@property (copy, nonatomic) NSString *sendGoldCollectDesc;
@property (copy, nonatomic) NSString *avatarUrl;
@property (copy, nonatomic) NSString *nickName;
@property (nonatomic) unsigned long long messageStatus;

+ (id)userModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
