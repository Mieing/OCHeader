@class NSString, AWEURLModel;

@interface AWERelationReasonUserLite : AWEBaseApiModel <AWEUserNameProtocol>

@property (retain, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *nickname;
@property (retain, nonatomic) AWEURLModel *avatarLarger;
@property (retain, nonatomic) AWEURLModel *avatarThumb;
@property (retain, nonatomic) AWEURLModel *avatarMedium;
@property (copy, nonatomic) NSString *mobileKey;
@property (nonatomic) long long followStatus;
@property (nonatomic) long long followerStatus;
@property (copy, nonatomic) NSString *secUserID;
@property (copy, nonatomic) NSString *signature;
@property (retain, nonatomic) NSString *remarkName;
@property (retain, nonatomic) NSString *contactName;
@property (copy, nonatomic) NSString *alias;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)avatarThumbJSONTransformer;
+ (id)avatarMediumJSONTransformer;
+ (id)followStatusJSONTransformer;
+ (id)avatarLargerJSONTransformer;
+ (id)followerStatusJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)userNameWithScene:(id)a0;
- (id)aliasWithScene:(id)a0;
- (void).cxx_destruct;

@end
