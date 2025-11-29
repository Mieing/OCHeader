@class NSMutableArray;

@interface IESLiveGameOpenPlatformAudienceRewardNotificationCenter : IESLiveGameOpenPlatformNotificationCenter

@property (retain, nonatomic) NSMutableArray *cachedNotes;

+ (id)defaultCenter;

- (id)notificationWithMessage:(id)a0;
- (void)startObservingMessage;
- (void)stopObservingMessage;
- (id)allRewardNotes;
- (void).cxx_destruct;
- (void)clearCache;

@end
