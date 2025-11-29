@class IESLiveInteractViewTable, NSString, IESLiveInteractionEmojiStore;

@interface IESLiveInteractEmojiToCommand : IESLiveInteractEmojiBaseCommand

@property (class, readonly, nonatomic) IESLiveInteractViewTable *micSeatTable;
@property (class, readonly, nonatomic) IESLiveInteractViewTable *reshapeSeats;

@property (nonatomic) BOOL flyMicRandomProbabilityDeliveryEnable;
@property (copy, nonatomic) NSString *emojiID;
@property (weak, nonatomic) IESLiveInteractionEmojiStore *emojiStore;

- (void)didSetAttachingDIContext;
- (void)dispatch:(id)a0 effect:(id)a1 to:(id)a2;
- (void)micSeatAnimation:(id)a0 effect:(id)a1 user:(id)a2 completed:(id /* block */)a3;
- (BOOL)isMicSeatReshapeEnabled:(id)a0;
- (void)micSeatReshapeAnimation:(id)a0;
- (void).cxx_destruct;
- (void)removeAnimation:(id)a0;

@end
