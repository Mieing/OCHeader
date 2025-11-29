@class NSString, AWEURLModel;

@interface AWEIMConversationVerifyUserInfoResponseModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long uid;
@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) AWEURLModel *avatarUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
