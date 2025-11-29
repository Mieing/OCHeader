@class AWELiveRoomLinkNativeEnterPreParam;

@interface AWELiveRoomLinkNativeEnterNotificationTask : IESLiveLinkTask

@property (retain, nonatomic) AWELiveRoomLinkNativeEnterPreParam *enterParam;

- (void)p_notiHostTargetWhenRoomFinished:(id)a0;
- (void)updateContextParam:(id)a0;
- (void).cxx_destruct;
- (void)run;

@end
