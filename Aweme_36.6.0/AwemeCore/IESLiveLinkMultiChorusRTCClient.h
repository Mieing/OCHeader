@class NSString;
@protocol IESLiveLinkMultiChorusRTCClientDelegate;

@interface IESLiveLinkMultiChorusRTCClient : IESLiveLinkBizBaseRTCClient <ByteRTCChorusCacheSyncObserver, IESLiveLinkMultiChorusRTCClientProtocol>

@property (weak, nonatomic) id<IESLiveLinkMultiChorusRTCClientDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)startChorusCacheSync:(id)a0;
- (void)onSyncEvent:(unsigned long long)a0 withError:(unsigned long long)a1;
- (void)onSyncedUsersChanged:(id)a0;
- (void)onSyncedVideoFrames:(id)a0 withUids:(id)a1;
- (int)stopChorusCacheSync;
- (void).cxx_destruct;

@end
