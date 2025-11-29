@class NSString;

@interface NewLifeFollowUserReq : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *username;
@property (nonatomic) BOOL isFollow;
@property (retain, nonatomic) NSString *referenceFeedId;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int enterScene;
@property (nonatomic) unsigned int enterType;
@property (nonatomic) unsigned int enhanceFollowBtn;
@property (nonatomic) unsigned int userType;
@property (retain, nonatomic) NSString *searchClickId;

+ (void)initialize;

@end
