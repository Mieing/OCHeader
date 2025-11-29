@class NSString, VoIPBubbleMsg, UIColor;

@interface VoIPBubbleMessageViewModel : CommonMessageViewModel

@property (retain, nonatomic) VoIPBubbleMsg *bubbleMsg;
@property (readonly, nonatomic) NSString *statusTips;
@property (readonly, nonatomic) UIColor *contentTextColor;

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;
+ (id)createMessageViewModelWithMessageWrap:(id)a0 contact:(id)a1 chatContact:(id)a2;

- (BOOL)shouldShowRedDot;
- (id)cellViewClassName;
- (id)initWithMessageWrap:(id)a0 contact:(id)a1 chatContact:(id)a2;
- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (id)additionalAccessibilityDescription;
- (void).cxx_destruct;

@end
