@class UITapGestureRecognizer, NSString, UIButton, NSDataDetector, NSAttributedString, AWETextRenderer;
@protocol AWEFoldingLabelDelegate;

@interface AWEFoldingLabel : UIView <UIGestureRecognizerDelegate, AWEFoldingLabel> {
    NSDataDetector *_dataDetector;
}

@property (retain, nonatomic) AWETextRenderer *renderer;
@property (nonatomic) unsigned long long foldingStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (weak, nonatomic) id<AWEFoldingLabelDelegate> delegate;
@property (readonly, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (nonatomic) unsigned long long textCheckingTypes;
@property (nonatomic) double preferredMaxLayoutWidth;
@property (nonatomic) BOOL disableButtonInteraction;
@property (nonatomic) long long numberOfLinesToFold;
@property (nonatomic) long long maximumNumberOfLines;
@property (readonly, nonatomic) UIButton *foldButton;
@property (copy, nonatomic) NSAttributedString *unfoldingAttributedText;
@property (copy, nonatomic) NSAttributedString *foldingAttributedText;
@property (nonatomic) BOOL automaticallyChoosesAlignmentToFitLanguageDirection;
@property (nonatomic) BOOL shouldAlwaysShowFoldButton;

+ (struct CGSize { double x0; double x1; })boundingSizeWithConstrainedSize:(struct CGSize { double x0; double x1; })a0 label:(id)a1 renderer:(id)a2;
+ (id)rendererContextFromLabel:(id)a0;

- (void)foldButtonAction:(id)a0;
- (void)updateFoldingStatusIfNeeded;
- (void)layoutFoldButton;
- (id)checkAttributedText:(id)a0;
- (void)fixBoundsForFoldButton;
- (id)rendererContextFromCurrentState;
- (void)unfold;
- (void)invalidateFoldingStatus;
- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)handleTap:(id)a0;
- (void)fold;

@end
