@interface IESLiveRoomMessageStrategy : IESLiveMessageNodeStrategy

@property (nonatomic) BOOL enableGiftMessageDecouple;

- (BOOL)doFilterForMessageList:(id)a0;
- (void)updateNodeOnCreated:(id)a0;
- (void)addNodeAction:(id)a0 withDisplayText:(id)a1 startLocation:(unsigned long long)a2;
- (BOOL)isMyMessage:(id)a0;
- (id)localNameColor;
- (void)jointAttributedString:(id)a0 withMessage:(id)a1;
- (id)localContentColor;
- (BOOL)needFoldForMessage:(id)a0;
- (void)addNodeActionWithServerNode:(id)a0;
- (BOOL)doFilterEcomLiveReplaySaveRoomMsg:(id)a0;
- (BOOL)doFilterMinorRefundMessage:(id)a0;
- (BOOL)doFilterOpenPlatformAudienceStartMessage:(id)a0;
- (BOOL)doFilterEcomFansClubMessage:(id)a0;
- (BOOL)doFilterEcomOrderMessage:(id)a0;
- (BOOL)doFilterGiftMessage:(id)a0;
- (id)config;
- (id)init;

@end
