@class NSDictionary;

@interface AWEFeedPlayerProtector : NSObject

@property (copy, nonatomic) NSDictionary *feedPlayConfigDict;
@property (copy, nonatomic) id /* block */ pauseFeedPlayer;

- (void)realCheckFeedPlayerLeaksSound;
- (double)feedLeakDetectDelay;
- (BOOL)player:(id)a0 inViewController:(id)a1;
- (id)feedPushAllowPlayList;
- (id)feedDisallowPlayTopVCList;
- (long long)nextResponderMaxStep;
- (void)checkFeedPlayerLeaksSound;
- (id)topResponderForView:(id)a0;
- (BOOL)enableResetPrventPause;
- (void).cxx_destruct;
- (void)pause;

@end
