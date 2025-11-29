@class MMFinderLiveStartGuideLogicPlugin, MMFinderLiveGuideAudienceApplyMicLogicPlugin, MMFinderLiveRealNameFriendLikeLogicPlugin, MMFinderLiveAllowRotateLogicPlugin, MMFinderLiveConnectMicPlugin, MMFinderLiveAdvertisementVideoPlugin, MMFinderLiveTaskFPSMonitorPlugin, MMFinderLiveCommentPlugin, MMLiveBaseTask, NSMutableArray, MMFinderLiveNextLiveNotificationLogicPlugin, MMFinderLiveNoticeLogicPlugin;
@protocol MMFinderLiveTaskFunctionPlugin;

@interface MMFinderLiveTaskPluginObj : NSObject

@property (weak, nonatomic) MMLiveBaseTask<MMFinderLiveTaskFunctionPlugin> *liveTask;
@property (retain, nonatomic) NSMutableArray *plugins;
@property (retain, nonatomic) MMFinderLiveAdvertisementVideoPlugin *adVideo;
@property (retain, nonatomic) MMFinderLiveCommentPlugin *comment;
@property (retain, nonatomic) MMFinderLiveConnectMicPlugin *connectMic;
@property (retain, nonatomic) MMFinderLiveRealNameFriendLikeLogicPlugin *friendLike;
@property (retain, nonatomic) MMFinderLiveTaskFPSMonitorPlugin *fpsMonitor;
@property (retain, nonatomic) MMFinderLiveNoticeLogicPlugin *notice;
@property (retain, nonatomic) MMFinderLiveStartGuideLogicPlugin *liveStartGuide;
@property (retain, nonatomic) MMFinderLiveNextLiveNotificationLogicPlugin *nextLiveNotification;
@property (retain, nonatomic) MMFinderLiveGuideAudienceApplyMicLogicPlugin *audienceApplyMicGuide;
@property (retain, nonatomic) MMFinderLiveAllowRotateLogicPlugin *allowRotate;

- (id)initWithLiveTask:(id)a0;
- (void)registerPlugin:(unsigned long long)a0;
- (void)notifyDataItemUpdated;
- (void)notifyExtFlagExtUpdated;
- (void).cxx_destruct;

@end
