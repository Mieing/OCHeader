@interface AWEIMLinkLiveTextAndButtonUserMessageCell : AWEIMTextAndButtonUserMessageCell

+ (id)identifier;

- (id)buttonModel;
- (id)buttonModelForReceiverWithType:(unsigned long long)a0;
- (id)linkLiveMessage;
- (void)trackJoinButtonClick;
- (id)defaultMenuItems;
- (void)buttonTapped;

@end
