@class NSString, IESLiveComponentContext;
@protocol IESLiveRoomService;

@interface IESLiveGameOpenPlatformAudienceDebugHandler : NSObject <HTSLiveRoomRemoteActions, IESLiveGameOpenPlatformAppInstanceLifeCycleObserver>

@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)didUpdateRoom:(id)a0 timeStamp:(id)a1;
- (void)appInstance:(id)a0 didSwitchStateFrom:(unsigned long long)a1 to:(unsigned long long)a2;
- (id)initWithComponentContext:(id)a0 eventContext:(id)a1 room:(id)a2;
- (void)processDebugInfo;
- (void).cxx_destruct;
- (void)dealloc;

@end
