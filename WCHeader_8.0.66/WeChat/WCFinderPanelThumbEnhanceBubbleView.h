@class UIImageView, WCFinderFeedContentVM, WCFinderRichTextView, UIView, UITapGestureRecognizer;
@protocol WCFinderPanelThumbEnhanceBubbleViewDelegate;

@interface WCFinderPanelThumbEnhanceBubbleView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) WCFinderRichTextView *contentLabel;
@property (retain, nonatomic) UIImageView *linkIconView;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (nonatomic) double maxWidth;
@property (weak, nonatomic) id<WCFinderPanelThumbEnhanceBubbleViewDelegate> delegate;

+ (BOOL)recommendFromEnhanceWithContentVM:(id)a0;
+ (id)bubbleBgColorWithContentVM:(id)a0;
+ (id)getRecommendContentWithContentVM:(id)a0;
+ (id)getRecommendContentWithContentVM:(id)a0 maxWidth:(double)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (void)setupUI;
- (void)clickAction;
- (void)layoutUI;
- (void)updateWithContentVM:(id)a0;
- (BOOL)canShowLinkAction:(id)a0;
- (id)contentTextColor;
- (BOOL)checkTextViewOverMaxWidth:(double)a0 content:(id)a1;
- (void)reportWithContentVM:(id)a0;
- (void).cxx_destruct;

@end
