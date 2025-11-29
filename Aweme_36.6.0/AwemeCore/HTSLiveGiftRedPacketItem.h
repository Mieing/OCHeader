@interface HTSLiveGiftRedPacketItem : HTSLiveGiftItem

+ (id)itemFromModel:(id)a0 attachingDIContext:(id)a1;

- (void)selectFailed;
- (unsigned long long)selectFailedType;
- (void)showSendRedEnvelopeView;
- (BOOL)canSelect;

@end
