@class MMLRUCache, NSString;

@interface ForwardMsgSDKReportLogic : MMUserService <MMServiceProtocol, ForwardMessageLogicExt>

@property (retain, nonatomic) MMLRUCache *sdkCacheInfo;
@property (nonatomic) unsigned int lastGetSdkInfoTimeSec;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onAfterForwardMsgToContact:(id)a0 msgWrap:(id)a1 fromMsg:(id)a2;
- (void)onPreForwardMsgToContact:(id)a0 msgWrap:(id)a1;
- (void)onForwardMsgToContact:(id)a0 scene:(unsigned long long)a1;
- (void)onPreForwardVideoToContact:(id)a0 videoInfo:(id)a1;
- (unsigned int)checkIsInFinder:(id)a0;
- (void).cxx_destruct;

@end
