@class NSString, NSArray, MMFinderLiveTaskId, NSDate, NSData;
@protocol WeAvatarLogicDelegate;

@interface WeAvatarLogic : NSObject <WCFinderLiveExt, MMLiveTaskMgrExt> {
    BOOL _isReady;
    long long _isRemoteOpen;
    BOOL _isRuntimeError;
    NSString *_handlingSEI;
    MMFinderLiveTaskId *_taskId;
    NSDate *_date;
    NSDate *_requestDate;
    NSArray *_anchor_username_list;
    BOOL _audience_switch;
    NSData *_server_session;
}

@property (weak, nonatomic) id<WeAvatarLogicDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)taskId;
- (id)initWithTaskId:(id)a0;
- (void)initABtest;
- (BOOL)checkAudienceNAnchorIsOpen;
- (void)onReceiveSEI:(id)a0;
- (BOOL)isReady;
- (void)markRuntimeError;
- (id)generatePollingRequest;
- (void)onGetPollingFetchEventWithTaskId:(id)a0 cmdId:(long long)a1 respBuffer:(id)a2 ret:(unsigned int)a3;
- (void)onLiveTask:(id)a0 receiveSEI:(id)a1;
- (id)parsePollingResp:(id)a0;
- (void)notifyOnReadyIfNeeded;
- (void)onPollingResponse:(id)a0;
- (void).cxx_destruct;

@end
