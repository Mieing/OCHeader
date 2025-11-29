@interface IESLiveAudioInfoManager : NSObject

@property (nonatomic) long long audioType;

+ (id)shareInstance;

- (void)p_addObserver;
- (void)handleAudioSessionRouteChangeNotification:(id)a0;
- (void)p_removeObserver;
- (BOOL)isHeadSetPlugging;
- (long long)getAudioPlayType;
- (int)audioPlayType;
- (id)init;
- (void)dealloc;

@end
