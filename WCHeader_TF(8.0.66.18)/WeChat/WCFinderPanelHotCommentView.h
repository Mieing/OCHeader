@class WCFinderSizingRichTextView, NSString, UIImageView, WCFinderComment, UILabel, RichTextView, UIView;
@protocol WCFinderPanelHotCommentViewDelegate;

@interface WCFinderPanelHotCommentView : UIView <RichTextLayoutDelegate>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *hotWordLabel;
@property (retain, nonatomic) RichTextView *textView;
@property (retain, nonatomic) UIView *suffixView;
@property (nonatomic) unsigned long long suffixType;
@property (nonatomic) double textViewTruncatedFY;
@property (retain, nonatomic) UIImageView *suffixIconImageView;
@property (retain, nonatomic) WCFinderSizingRichTextView *suffixDescLabel;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) WCFinderComment *comment;
@property (nonatomic) int carouselOptionFlag;
@property (weak, nonatomic) id<WCFinderPanelHotCommentViewDelegate> delagate;
@property (nonatomic) BOOL forceBoldHotWord;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reportKVDictWithComment:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateSubviewsStyle;
- (void)updateLayout;
- (void)updateWithCommentList:(id)a0 optionFlag:(int)a1 width:(double)a2;
- (void)updateAccessibility;
- (id)getContentWithComment:(id)a0;
- (void)updateHotwordLabelWithComment:(id)a0;
- (void)updateSuffixViewWithComment:(id)a0;
- (void)updateSuffixViewWithLeftView:(id)a0 iconName:(id)a1 iconSize:(struct CGSize { double x0; double x1; })a2 labelText:(id)a3 elementsMargin:(double)a4;
- (void)onClickComment;
- (void)resetTextViewTruncatedState;
- (id)suffixLabelColor;
- (id)suffixIconColor;
- (BOOL)isCardStyle;
- (void)updateToCardStyle;
- (void)updateSubviewsToCardStyle;
- (void)updateSuffixViewToCardStyleWithComment:(id)a0;
- (double)originXForLineAtHeight:(double)a0 richTextView:(id)a1;
- (double)lineWidthAtY:(double)a0 lineIndex:(long long)a1 richTextView:(id)a2;
- (id)dynamicFontOfSize:(double)a0;
- (void).cxx_destruct;

@end
