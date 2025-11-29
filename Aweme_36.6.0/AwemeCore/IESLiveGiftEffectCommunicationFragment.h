@class IESLiveGiftEffectCommunicationStore;

@interface IESLiveGiftEffectCommunicationFragment : IESLiveRoomComponent

@property (retain, nonatomic) IESLiveGiftEffectCommunicationStore *store;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void).cxx_destruct;

@end
