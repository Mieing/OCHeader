@class UIButton, NSString, UIImageView, WCFinderFeedContentVM, WCFinderFeedContentTouchExpandTextView, InteractionLabel;
@protocol WCFinderContentTableViewCellDelegate;

@interface WCFinderContentTableViewCell : WCFinderTableViewCell <WCFinderFeedContentTextClickActionDelegate, WCFinderMelodyViewDelegate, WCFinderTopicDataKeyExt>

@property (retain, nonatomic) WCFinderFeedContentTouchExpandTextView *textView;
@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (retain, nonatomic) InteractionLabel *linkLabel;
@property (retain, nonatomic) InteractionLabel *POILabel;
@property (retain, nonatomic) InteractionLabel *eventLabel;
@property (retain, nonatomic) UIButton *longEntry;
@property (retain, nonatomic) UIButton *longEntryBubble;
@property (retain, nonatomic) UIImageView *locationImageView;
@property (retain, nonatomic) UIImageView *eventImageView;
@property (retain, nonatomic) UIImageView *linkImageView;
@property (nonatomic) int scene;
@property (copy, nonatomic) id /* block */ delayRefreshWork;
@property (weak, nonatomic) id<WCFinderContentTableViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)cellHeightWith:(id)a0 width:(double)a1;
+ (double)constTextHeightWith:(id)a0 width:(double)a1;
+ (struct CGSize { double x0; double x1; })cellIconSize;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)dealloc;
- (void)prepareForReuse;
- (void)onMenuControllerWillHide:(id)a0;
- (void)updateContentWith:(id)a0 scene:(int)a1;
- (void)cellStartExposeReportAction;
- (void)onEntry;
- (void)enterTriggerArea;
- (void)leaveTriggerArea;
- (BOOL)canBecomeFirstResponder;
- (void)showTextMenuWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)clickLinkAction;
- (void)clickPOIAction:(id)a0;
- (void)clickEventAction:(id)a0;
- (void)showLongEntryBubbleIfPossible;
- (void)hideLongEntryBubbleIfPossible;
- (void)resetLongEntry;
- (void)onFeedContentTextView:(id)a0 clickReadMore:(BOOL)a1 isTouchExpand:(BOOL)a2;
- (void)onFeedContentTextView:(id)a0 longPressedText:(id)a1 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)onFeedContentTextView:(id)a0 clickTopicText:(id)a1;
- (void)onFeedContentTextView:(id)a0 clickMentionUsername:(id)a1 nickname:(id)a2;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)copyText;
- (void)onFeedContentTextView:(id)a0 clickContentUserName:(id)a1;
- (void)finderFeedEventIllegalWithEventId:(id)a0;
- (void).cxx_destruct;

@end
