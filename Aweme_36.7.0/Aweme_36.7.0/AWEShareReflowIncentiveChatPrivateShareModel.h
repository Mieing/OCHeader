@class NSString, AWEShareReflowIncentiveChatUserModel;

@interface AWEShareReflowIncentiveChatPrivateShareModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEShareReflowIncentiveChatUserModel *userInfo;
@property (copy, nonatomic) NSString *mainTitle;
@property (copy, nonatomic) NSString *btnText;
@property (copy, nonatomic) NSString *subTitle;
@property (nonatomic) long long followStatus;
@property (nonatomic) BOOL hasInviteBefore;
@property (copy, nonatomic) NSString *cardImgUrl;
@property (copy, nonatomic) NSString *tagLabelText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
