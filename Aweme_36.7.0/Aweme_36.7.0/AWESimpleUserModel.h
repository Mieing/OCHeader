@class NSString, AWEHitTaskInfoModel, AWEURLModel;

@interface AWESimpleUserModel : AWEBaseApiModel <AWEUserNameProtocol>

@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *signature;
@property (retain, nonatomic) AWEURLModel *avatarThumb;
@property (nonatomic) long long followStatus;
@property (nonatomic) long long status;
@property (nonatomic) long long userRate;
@property (retain, nonatomic) AWEURLModel *avatarLarger;
@property (retain, nonatomic) AWEHitTaskInfoModel *hitTaskModel;
@property (copy, nonatomic) NSString *uniqueID;
@property (copy, nonatomic) NSString *secUserID;
@property (copy, nonatomic) NSString *alias;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)statusJSONTransformer;
+ (id)avatarThumbJSONAdapter;
+ (id)followStatusJSONTransformer;
+ (id)userRateJSONTransformer;
+ (id)avatarLargerJSONAdapter;
+ (id)hitTaskModelJSONAdapter;
+ (id)JSONKeyPathsByPropertyKey;

- (id)userNameWithScene:(id)a0;
- (id)aliasWithScene:(id)a0;
- (void).cxx_destruct;
- (id)displayName;
- (id)initWithDict:(id)a0;

@end
