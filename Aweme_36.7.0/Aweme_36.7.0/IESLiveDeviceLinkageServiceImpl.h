@class IESLiveDeviceLinkageCenter, IESLiveDeviceLinkageConfig, NSString;
@protocol IESLiveTracker;

@interface IESLiveDeviceLinkageServiceImpl : NSObject <IESLiveDeviceLinkageService>

@property (retain, nonatomic) IESLiveDeviceLinkageConfig *config;
@property (retain, nonatomic) IESLiveDeviceLinkageCenter *center;
@property (weak, nonatomic) id<IESLiveTracker> tracker;
@property (nonatomic) BOOL lastSubscribeIsEmpty;
@property (copy, nonatomic) id /* block */ feedRefreshRoomCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)subscribeLiveRoomList:(id)a0;
- (void)registeProcessors;
- (void)registerPitayaMessageHandle;
- (id)processPitayaEvent:(id)a0 params:(id)a1;
- (void)_subscribeLiveRoomEvent:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
