@class NSString, NSRecursiveLock, HHServicePublisher;
@protocol BDByteSinkNetServiceDelegate;

@interface BDByteSinkNetService : NSObject <HHServicePublisherDelegate>

@property (retain, nonatomic) HHServicePublisher *servicePublisher;
@property (nonatomic) long long currentSdkType;
@property (nonatomic) BOOL runInBackground;
@property (nonatomic) BOOL needResumeWhenEnterForeground;
@property (nonatomic) unsigned long long currentBDLinkPort;
@property (nonatomic) unsigned long long currentByteLinkPort;
@property (nonatomic) unsigned long long currentByteLinkPortInvite;
@property (copy, nonatomic) NSString *currentServiceStr;
@property (copy, nonatomic) NSString *protocolVersion;
@property (copy, nonatomic) NSString *rtcRoomID;
@property (copy, nonatomic) NSString *rtcUserID;
@property (retain, nonatomic) NSString *customInfo;
@property (retain, nonatomic) NSRecursiveLock *rlock;
@property (weak, nonatomic) id<BDByteSinkNetServiceDelegate> delegate;
@property (readonly, nonatomic) long long lastErrorCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)buildTxtData;
- (void)_stopService;
- (void)serviceDidPublish:(id)a0;
- (void)serviceDidNotPublish:(id)a0;
- (void)startServiceWithType:(long long)a0 bdlinkPort:(unsigned long long)a1 byteLinkPort:(unsigned long long)a2 byteLinkPortInvite:(unsigned long long)a3 protocolVersion:(id)a4 serviceString:(id)a5 runInBackground:(BOOL)a6 rtcRoomID:(id)a7 rtcUserID:(id)a8 customInfo:(id)a9;
- (void).cxx_destruct;
- (id)init;
- (void)_start;
- (void)dealloc;
- (void)_didEnterBackground:(id)a0;
- (void)_willEnterForeground:(id)a0;
- (void)stopService;

@end
