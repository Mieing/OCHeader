@class NSMutableArray, UITapGestureRecognizer, UIButton, NSString, NSAttributedString, NSDataDetector;
@protocol AWEChallengeFoldingTextViewDelegate;

@interface AWEChallengeFoldingTextView : UITextView <UITextViewDelegate, UIGestureRecognizerDelegate>

@property (nonatomic) unsigned long long foldingStatus;
@property (copy, nonatomic) NSAttributedString *attributedContentText;
@property (nonatomic) double preferredMaxLayoutWidth;
@property (nonatomic) BOOL textViewIsTruncated;
@property (retain, nonatomic) NSMutableArray *lineFragmentRects;
@property (nonatomic) unsigned long long textCheckingTypes;
@property (nonatomic) BOOL shouldTrackDisplay;
@property (nonatomic) BOOL isDisplayed;
@property (retain, nonatomic) NSDataDetector *dataDetector;
@property (weak, nonatomic) id<AWEChallengeFoldingTextViewDelegate> textViewDelegate;
@property (readonly, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (nonatomic) BOOL disableButtonInteraction;
@property (nonatomic) long long numberOfLinesToFold;
@property (nonatomic) long long maximumNumberOfLines;
@property (readonly, nonatomic) UIButton *foldButton;
@property (copy, nonatomic) NSAttributedString *unfoldingAttributedText;
@property (copy, nonatomic) NSAttributedString *foldingAttributedText;
@property (nonatomic) BOOL automaticallyChoosesAlignmentToFitLanguageDirection;
@property (nonatomic) BOOL shouldAlwaysShowFoldButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)foldButtonAction:(id)a0;
- (void)updateFoldingStatusIfNeeded;
- (void)layoutFoldButton;
- (id)checkAttributedText:(id)a0;
- (void)fixBoundsForFoldButton;
- (void)unfold;
- (void)invalidateFoldingStatus;
- (id)initWithContent:(id)a0 preferredMaxWidth:(double)a1;
- (void)excuteSearch:(id)a0;
- (void)trackSearchMenuShow;
- (void)handleDetailVCDisplayNotification:(id)a0;
- (BOOL)_shouldTreatAsInteractiveElementForCheckingResult:(id)a0;
- (id)_attributesForCheckingResult:(id)a0;
- (void)layoutTextView;
- (struct CGSize { double x0; double x1; })boundingSizeWithConstrainedSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)handleTap:(id)a0;
- (void)fold;

@end
