@class BaseRequest, NSString, NSData, FinderBaseRequest, FinderLiveGameSetTeamupConfigRequest_GameLiveTeamupSetting;

@interface FinderLiveGameSetTeamupConfigRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSData *liveCookies;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) FinderLiveGameSetTeamupConfigRequest_GameLiveTeamupSetting *teamupSetting;

+ (void)initialize;

@end
