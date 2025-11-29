@class RTVXRDegradeService, NSString;
@protocol RxInjector;

@interface __RTVXRModuleService : NSObject <RTVXRModuleService, RTVXRRoomServiceObserver>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) RTVXRDegradeService *degradeService;
@property BOOL isVideoSessionDisable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (BOOL)isRTVAudioEnableWithUid:(id)a0 scene:(unsigned long long)a1 shortConversationID:(id)a2;
- (BOOL)isRTVVideoEnableWithUid:(id)a0 scene:(unsigned long long)a1 shortConversationID:(id)a2;
- (BOOL)isDegradeByServerWithUid:(id)a0 isVideo:(BOOL)a1;
- (BOOL)isVideoSessionEnable;
- (void).cxx_destruct;

@end
