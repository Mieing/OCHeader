@class NSNumber, NSString, AWEURLModel;

@interface AWERelativeUserModel : AWEBaseApiModel <AWEUserNameProtocol>

@property (retain, nonatomic) NSNumber *userID;
@property (retain, nonatomic) AWEURLModel *avatar;
@property (copy, nonatomic) NSString *nickname;
@property (retain, nonatomic) AWEURLModel *avatarThumb;
@property (nonatomic) long long followStatus;
@property (retain, nonatomic) NSString *secUserID;
@property (copy, nonatomic) NSString *alias;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)avatarThumbJSONAdapter;
+ (id)followStatusJSONTransformer;
+ (id)avatarJSONAdapter;
+ (id)JSONKeyPathsByPropertyKey;

- (id)getUserModel;
- (id)userNameWithScene:(id)a0;
- (id)aliasWithScene:(id)a0;
- (void).cxx_destruct;
- (id)displayName;

@end
