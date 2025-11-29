@class AFDTextBubbleContentView, AFDSkylightPublishBubbleContentView, AFDSkylightRemindBubbleContentView, AFDSkylightAudioBubbleContentView;

@interface AFDSkylightCellBubble : AFDReusableBubble

@property (retain, nonatomic) AFDSkylightPublishBubbleContentView *publishContentView;
@property (retain, nonatomic) AFDTextBubbleContentView *notesContentView;
@property (retain, nonatomic) AFDSkylightAudioBubbleContentView *audioContentView;
@property (retain, nonatomic) AFDSkylightRemindBubbleContentView *remindContentView;

+ (id)textBubbleConfig;
+ (struct CGSize { double x0; double x1; })getBubbleSizeWithContentViewSize:(struct CGSize { double x0; double x1; })a0;

- (void)layoutSubviews;
- (void)setupBubbleStyle;
- (void)updateNotesContentViewWithAttributedString:(id)a0;
- (void)addAllContentView;
- (void)updateAudioContentViewWithSeconds:(long long)a0;
- (void)updateRemindContentView;
- (void)updatePublishContentView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
