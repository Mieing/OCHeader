@class AWEURLModel, NSString, AWECoCreatorLiveModel, AWECoCreatorExternModel;

@interface AWECoCreatorModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *roleTitle;
@property (nonatomic) long long roleId;
@property (nonatomic) long long index;
@property (nonatomic) unsigned long long inviteStatus;
@property (nonatomic) long long followStatus;
@property (nonatomic) long long followerStatus;
@property (retain, nonatomic) AWEURLModel *avatar;
@property (copy, nonatomic) NSString *customVerify;
@property (copy, nonatomic) NSString *enterpriseVerifyReason;
@property (nonatomic) long long followerCount;
@property (retain, nonatomic) AWECoCreatorExternModel *externModel;
@property (retain, nonatomic) AWECoCreatorLiveModel *liveModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)avatarJSONTransformer;
+ (id)liveModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
