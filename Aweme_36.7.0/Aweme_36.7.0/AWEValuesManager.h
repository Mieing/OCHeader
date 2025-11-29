@class NSString;

@interface AWEValuesManager : NSObject <AWEValuesManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowBadContentNotice:(id)a0;
+ (long long)currentDayShownVoteVideo;
+ (double)lastFectchTimeInterval;
+ (BOOL)shouldShowJudgeVideoView:(id)a0;
+ (void)handleVideo:(id)a0 accept:(BOOL)a1 completion:(id /* block */)a2;
+ (id)trackResultStatusString:(id)a0;
+ (BOOL)isModelRateValidToShowRiskTips:(id)a0;
+ (BOOL)shouldShowFoldVideoNotice:(id)a0;
+ (void)recordVoteVideoShow;
+ (void)handleVideo:(id)a0 permit:(BOOL)a1 completion:(id /* block */)a2;
+ (long long)getInvisibleStatus:(id)a0;


@end
