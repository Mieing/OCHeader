@class NSString, IESLiveMessageTrayStore;

@interface IESLiveMessageTrayFragment : IESLiveRoomComponent <IESLiveMessageTrayRouter>

@property (retain, nonatomic) IESLiveMessageTrayStore *store;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;
+ (BOOL)isMixed;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentUnmount;
- (void)addTrayWithBusinessConfigure:(id)a0;
- (void)disappearMatchHotTray:(id)a0;
- (void)startAnchorStableModeStrategy;
- (void)stopAnchorStableModeStrategy;
- (void).cxx_destruct;

@end
