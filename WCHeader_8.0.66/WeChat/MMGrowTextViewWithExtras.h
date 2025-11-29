@class CAGradientLayer, NSString, MMGrowTextView, MMGrowTextViewWithExtrasConfig, UILabel, UIView, UIButton;
@protocol MMGrowTextViewWithExtrasDelegate;

@interface MMGrowTextViewWithExtras : UIView <MMGrowTextViewDelegate, UITextViewDelegate, IMMGrowTextViewExt>

@property (retain, nonatomic) UIButton *cleanButton;
@property (retain, nonatomic) UILabel *descNumberLabel;
@property (retain, nonatomic) CAGradientLayer *topGradientLayer;
@property (retain, nonatomic) CAGradientLayer *bottomGradientLayer;
@property (retain, nonatomic) MMGrowTextViewWithExtrasConfig *config;
@property (retain, nonatomic) UIView *topGradientMaskView;
@property (retain, nonatomic) UIView *bottomGradientMaskView;
@property (nonatomic) BOOL isEditing;
@property (retain, nonatomic) UILabel *place;
@property (retain, nonatomic) MMGrowTextView *textView;
@property (weak, nonatomic) id<MMGrowTextViewWithExtrasDelegate> delegate;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *placeholder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithConfig:(id)a0;
- (void)dealloc;
- (BOOL)ifMovingToOrFromParentViewController;
- (void)initGradientView;
- (void)initView:(id)a0;
- (void)layoutSubviews;
- (void)updateSubViewlayout;
- (long long)remainingCharacters;
- (BOOL)isTextLengthExceeded;
- (void)setDescNumberLabelHidden:(BOOL)a0;
- (BOOL)becomeFirstResponder;
- (BOOL)isFirstResponder;
- (void)updateCleanButtonHiddenState:(BOOL)a0;
- (void)cleanButtonClicked:(id)a0;
- (void)onTextView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)TextViewHeightDidChanged:(id)a0;
- (void)TextDidChanged:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)updateDescLabelStatus;
- (void)MMGrowTextViewBeginEditing:(id)a0;
- (void)MMGrowTextViewEndEditing:(id)a0;
- (long long)getTextLength;
- (long long)getPlaceHolderLength;
- (void)resetTextMaxShowLine:(double)a0;
- (void).cxx_destruct;

@end
