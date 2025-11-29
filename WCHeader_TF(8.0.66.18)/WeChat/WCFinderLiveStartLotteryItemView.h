@class MMUITextField, UIColor, UIImageView, UISwitch, UIView, NSString, MMUILabel;
@protocol WCFinderLiveStartLotteryItemViewDelegate;

@interface WCFinderLiveStartLotteryItemView : MMUIView <UITextFieldDelegate, WCActionSheetDelegate, MMLiveStartLotteryOptionViewProviding>

@property (retain, nonatomic) UIView *sepelateLine;
@property (weak, nonatomic) id<WCFinderLiveStartLotteryItemViewDelegate> delegate;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) MMUILabel *itemTextLabel;
@property (retain, nonatomic) MMUILabel *itemSuffixLabel;
@property (retain, nonatomic) MMUITextField *textField;
@property (retain, nonatomic) MMUILabel *wordsCountTipsLabel;
@property (retain, nonatomic) UIImageView *arrowImgView;
@property (retain, nonatomic) UISwitch *uiSwitch;
@property (retain, nonatomic) UIView *customView;
@property (retain, nonatomic) UIView *itemTextSuffixView;
@property (nonatomic) long long itemType;
@property (nonatomic) unsigned long long maxInputNumber;
@property (nonatomic) unsigned int maxInputWordCount;
@property (copy, nonatomic) id /* block */ inputNumberDidChanged;
@property (nonatomic) BOOL needFilterWhiteSpace;
@property (nonatomic) BOOL limitView;
@property (retain, nonatomic) UIColor *switchOnColor;
@property (nonatomic) BOOL unableSelection;
@property (nonatomic) BOOL unableTextField;
@property (retain, nonatomic) NSString *label;
@property (nonatomic) unsigned long long listingPosition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithItemType:(long long)a0;
- (void)layoutSubviews;
- (void)updateTextFieldEnable:(BOOL)a0 text:(id)a1 placeHolder:(id)a2;
- (id)accessibilityLabel;
- (void)setupUI;
- (void)layoutUI;
- (void)layoutWordsCountTipsLabel;
- (void)updateItemText:(id)a0 customView:(id)a1;
- (void)updateItemText:(id)a0 itemTextSuffixView:(id)a1 customView:(id)a2;
- (void)updateItemText:(id)a0 suffixText:(id)a1 placeHolder:(id)a2;
- (void)updateItemText:(id)a0 suffixText:(id)a1 placeHolder:(id)a2 switchOn:(BOOL)a3 itemTextSuffixView:(id)a4;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)onTextFieldChanged:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)onTextFieldHideKeyBoard;
- (void)onTextFieldShowKeyBoard;
- (void)handleSelfViewTapGesture:(id)a0;
- (void)switchDidChanged:(id)a0;
- (void).cxx_destruct;

@end
