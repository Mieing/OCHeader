@class NSString, ChatTimeNodeRightButtonInfo;

@interface ChatTimeViewModel : BaseChatViewModel

@property (nonatomic) double showingTime;
@property (readonly, nonatomic) NSString *timeText;
@property (readonly, nonatomic) double labelWidth;
@property (readonly, nonatomic) BOOL rightButtonANewLine;
@property (readonly, nonatomic) double rightButtonHeight;
@property (readonly, nonatomic) double rightButtonWidth;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } rightButtonOrigin;
@property (retain, nonatomic) ChatTimeNodeRightButtonInfo *rightButtonInfo;

- (id)init;
- (id)cellViewClassName;
- (struct CGSize { double x0; double x1; })measure:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isRightButtonNeedANewLine;
- (void)updateLayouts;
- (void).cxx_destruct;

@end
