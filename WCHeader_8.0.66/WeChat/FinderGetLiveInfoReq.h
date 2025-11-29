@class BaseRequest, NSString, FinderLiveClientStatus, FinderGetLiveInfoReq_FinderGetLiveInfoSceneNotificationInfo, FinderGetLiveInfoReq_LiveADBypassInfo;

@interface FinderGetLiveInfoReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) FinderLiveClientStatus *liveStatus;
@property (retain, nonatomic) FinderGetLiveInfoReq_LiveADBypassInfo *adBypassInfo;
@property (retain, nonatomic) FinderGetLiveInfoReq_FinderGetLiveInfoSceneNotificationInfo *notificationInfo;

+ (void)initialize;

@end
