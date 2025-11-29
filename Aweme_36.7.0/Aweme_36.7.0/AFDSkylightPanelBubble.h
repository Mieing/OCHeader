@class AFDTextBubbleContentView, AFDSkylightPlayableAudioBubbleContentView;

@interface AFDSkylightPanelBubble : AFDReusableBubble

@property (retain, nonatomic) AFDTextBubbleContentView *notesContentView;
@property (retain, nonatomic) AFDSkylightPlayableAudioBubbleContentView *audioContentView;

+ (id)textBubbleConfig;

- (void)setupBubbleStyle;
- (id)initWithAudioView:(id)a0;
- (void)updateNotesContentViewWithAttributedString:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
