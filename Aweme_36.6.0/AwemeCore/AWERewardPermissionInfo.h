@class NSString;

@interface AWERewardPermissionInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long rewardTabAuthStatus;
@property (nonatomic) long long rewardBtnAuthStatus;
@property (nonatomic) long long rewardBtnStatus;
@property (nonatomic) long long rewardIconAuthStatus;
@property (nonatomic) BOOL isClickRecently;
@property (nonatomic) BOOL isFiftyAuthorStableFans;
@property (nonatomic) BOOL isIronFansInAwemePost;
@property (nonatomic) BOOL exitAdmireInAwemePost;
@property (nonatomic) BOOL authorCanAdmire;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
