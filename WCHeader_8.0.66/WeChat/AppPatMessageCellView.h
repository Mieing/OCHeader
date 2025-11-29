@class NSArray, NSMutableDictionary, AppPatMessageViewModel, UIView, NSString, UIButton;

@interface AppPatMessageCellView : BaseMessageCellView <ILinkEventExt, ChatBackgroundExt>

@property (retain, nonatomic) UIButton *expandButton;
@property (retain, nonatomic) NSArray *patBackgroundViews;
@property (retain, nonatomic) UIView *currentPatBackgroundView;
@property (retain, nonatomic) NSMutableDictionary *contentIdToBackgroundView;
@property (readonly, nonatomic) AppPatMessageViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (BOOL)canBeReused;
- (id)accessibilityLabel;
- (BOOL)accessibilityPerformMagicTap;
- (BOOL)isAccessibilityElement;
- (void)onLongTouch:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)canCellShowOperationMenu;
- (void)onTouchCancel;
- (void)prepareForReuse;
- (void)layoutContentView;
- (void)setSubPatMessageReadFromTop:(double)a0 andBottom:(double)a1;
- (void)playEmojiAnimationForPatWrap:(id)a0 withTimeOffset:(double)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForPatWithContentId:(id)a0 emojiName:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)onTapExpandButton;
- (void)reportTapExpandButton;
- (id)reusableViewWithContentId:(id)a0 atIndex:(unsigned long long)a1;
- (id)createRichTextViewUseLightStyle:(BOOL)a0;
- (id)createExpandButtonUseLightStyle:(BOOL)a0;
- (void)setView:(id)a0 useLightStyle:(BOOL)a1;
- (void)setView:(id)a0 useLightStyle:(BOOL)a1 isHighlight:(BOOL)a2;
- (void)restoreCurrentPatBackgroundViewIfNeeded;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)onChatBackgroundChanged:(id)a0;
- (void).cxx_destruct;

@end
