@class UIView, NSString, NSArray, MMGrowTextView, UIImageView, UIButton, MMUILabel, UILabel;
@protocol WCFinderEditExtensionReadViewDataSource, WCFinderEditExtensionReadViewDelegate;

@interface WCFinderEditExtensionReadView : WCActionSheet <MMGrowTextViewDelegate>

@property (retain, nonatomic) UIView *tipsView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *addButton;
@property (retain, nonatomic) MMGrowTextView *growTextView;
@property (copy, nonatomic) NSString *urlString;
@property (retain, nonatomic) MMUILabel *guidePasteBoardLabel;
@property (retain, nonatomic) UIImageView *triangleBView;
@property (retain, nonatomic) UIView *guidePasteBoardBGView;
@property (retain, nonatomic) NSArray *extensionLinkAllowedList;
@property (retain, nonatomic) UIView *textBackgroundView;
@property (copy, nonatomic) NSString *pasteBoardString;
@property (nonatomic) double fKeyboardHeight;
@property (retain, nonatomic) UILabel *bottomWarningLabel;
@property (nonatomic) long long supportType;
@property (weak, nonatomic) id<WCFinderEditExtensionReadViewDelegate> m_delegate;
@property (weak, nonatomic) id<WCFinderEditExtensionReadViewDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)heightOfWholeSheet;
- (double)getCustomView:(double)a0;
- (id)getTipsActionSheetView;
- (void)setUpBottomWarningView;
- (void)layoutComponents;
- (id)getTitleTips;
- (id)getGrowTextPlaceHolder;
- (void)setUpPasteBoardGuideBubble;
- (void)removePasteBoardGuideBubble;
- (void)clickPasteBoardStringLabel;
- (void)tapForBecomeFirstResponder;
- (void)showInView:(id)a0;
- (void)setAddButtonEnable:(BOOL)a0;
- (void)onClose;
- (void)onAdd;
- (void)TextDidChanged:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)keyboardWillShow:(double)a0;
- (void).cxx_destruct;

@end
