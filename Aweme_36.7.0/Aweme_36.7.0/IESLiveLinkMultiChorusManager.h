@class NSString, ByteRTCChorusCacheSyncConfig, IESLiveLinkLiveRtc;
@protocol IESLiveLinkMultiChorusManagerDelegate, IMultiChorusDelegate;

@interface IESLiveLinkMultiChorusManager : NSObject <ByteRTCChorusCacheSyncObserver>

@property (weak, nonatomic) IESLiveLinkLiveRtc *liveRtc;
@property (weak, nonatomic) id<IMultiChorusDelegate> multiChorusDelegate;
@property (retain, nonatomic) ByteRTCChorusCacheSyncConfig *multiChorusConfig;
@property (retain, nonatomic) NSString *roomId;
@property (retain, nonatomic) NSString *userId;
@property (weak, nonatomic) id<IESLiveLinkMultiChorusManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupWithConfig:(id)a0;
- (int)startChorusCacheSync:(id)a0;
- (id)rtcEngineKit;
- (void)onSyncEvent:(unsigned long long)a0 withError:(unsigned long long)a1;
- (void)onSyncedUsersChanged:(id)a0;
- (void)onSyncedVideoFrames:(id)a0 withUids:(id)a1;
- (int)stopChorusCacheSync;
- (void).cxx_destruct;

@end
