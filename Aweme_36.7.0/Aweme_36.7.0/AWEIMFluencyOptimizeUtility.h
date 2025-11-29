@interface AWEIMFluencyOptimizeUtility : NSObject

+ (BOOL)enableFluencyOptV2;
+ (BOOL)enableFluencyOptChatDiff;
+ (BOOL)enableFluencyOptReduceKVO;
+ (BOOL)enableMessageAsyncLayout;
+ (BOOL)enableTrackCompPerf;
+ (BOOL)enableFluencyOpt;
+ (void)trackPerfMetricsScene:(id)a0 cost:(long long)a1 compClass:(Class)a2 invocationSelector:(SEL)a3 extraParam:(id)a4;
+ (BOOL)enableConProtocolCache;
+ (BOOL)enableTrackCellPerf;
+ (void)trackPerfCellWithScene:(id)a0 cost:(long long)a1 extra:(id)a2;
+ (id)messageAsyncLayoutBlackList;
+ (BOOL)enableFluencyOptQuickPhoto;
+ (BOOL)enableFluencyOptFansTag;
+ (BOOL)enableFluencyOptCommunicationRequest;
+ (BOOL)enableFluencyOptMsgObserver;
+ (id)disableUserMergePropertyArray;
+ (id)p_fluencyOptDict;
+ (BOOL)enableFluencyOptUser;
+ (id)p_syncGetIMFluencyOptV2;
+ (id)fpsTrackConfig;
+ (BOOL)enableFluencyOptPeerAB;
+ (BOOL)enableFluencyOptAsyncGetUser;

@end
