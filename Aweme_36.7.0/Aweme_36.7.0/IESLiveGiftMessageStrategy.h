@interface IESLiveGiftMessageStrategy : IESLiveMessageNodeStrategy

@property (nonatomic) BOOL enableGiftMessageDecouple;

- (id)attachingDIContext;
- (BOOL)doFilterForMessageList:(id)a0;
- (id)localNameColor;
- (void)jointAttributedString:(id)a0 withMessage:(id)a1;
- (id)needLoadOtherImageURLsForMessage:(id)a0;
- (id)localContentColor;
- (BOOL)needFoldForMessage:(id)a0;
- (BOOL)doFilterForMessageListV2:(id)a0;
- (id)giftIconURL;
- (id)getFinalContent;
- (id)config;
- (id)init;

@end
