@class FinderContactExtInfo, BaseRequest, NSString, NSData, FinderBaseRequest, CreateSceneInfo;

@interface FinderCreateUserRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSData *headImg;
@property (retain, nonatomic) NSString *headImgUrl;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *signature;
@property (retain, nonatomic) FinderContactExtInfo *extInfo;
@property (nonatomic) unsigned int notShowLocationSwitch;
@property (nonatomic) unsigned int notShowSexSwitch;
@property (retain, nonatomic) FinderContactExtInfo *registerInfo;
@property (nonatomic) unsigned int showFinderInWx;
@property (retain, nonatomic) CreateSceneInfo *createInfo;
@property (nonatomic) unsigned int notRecommendToFriend;
@property (retain, nonatomic) NSString *clientid;

+ (void)initialize;

@end
