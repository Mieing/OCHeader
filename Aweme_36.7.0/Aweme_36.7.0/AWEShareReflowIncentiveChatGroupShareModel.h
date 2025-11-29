@class NSString, AWEShareReflowIncentiveChatGroupModel;

@interface AWEShareReflowIncentiveChatGroupShareModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEShareReflowIncentiveChatGroupModel *groupInfo;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *inviterUID;
@property (copy, nonatomic) NSString *inviterNickName;
@property (copy, nonatomic) NSString *ticket;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
