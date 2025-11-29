@class UIFont, NSString, UITextView, UIView, CALayer, ACCPollStickerOptionView;

@interface AWEPollStickerView : UIView <UITextViewDelegate, AWEPollStickerViewProtocol>

@property (copy, nonatomic) NSString *placeHolderStr;
@property (retain, nonatomic) UIFont *placeHolderFont;
@property (copy, nonatomic) NSString *opt1PlaceHolder;
@property (copy, nonatomic) NSString *opt2PlaceHolder;
@property (nonatomic) double placeHolderWidth;
@property (nonatomic) double opt1PlaceHolderWidth;
@property (nonatomic) double opt2PlaceHolderWidth;
@property (nonatomic) BOOL reLayoutQuestionWhenEmpty;
@property (nonatomic) BOOL hasAddShadow;
@property (retain, nonatomic) UITextView *questionView;
@property (retain, nonatomic) UIView *option1BGView;
@property (retain, nonatomic) UIView *option2BGView;
@property (retain, nonatomic) UITextView *option1View;
@property (retain, nonatomic) UITextView *option2View;
@property (retain, nonatomic) ACCPollStickerOptionView *option1DisplayView;
@property (retain, nonatomic) ACCPollStickerOptionView *option2DisplayView;
@property (nonatomic) unsigned long long currentEditType;
@property (retain, nonatomic) CALayer *op1ShadowLayer;
@property (retain, nonatomic) CALayer *op2ShadowLayer;
@property (copy, nonatomic) id /* block */ finishEditBlock;
@property (copy, nonatomic) id /* block */ reLayoutEndBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)contentDidUpdateToScale:(double)a0;
- (void)didFinishEdit;
- (id)setVoteInfoWhenFinish;
- (void)updateOptionsConstraints;
- (id)countOfOptionItem;
- (void)configEditViewWith:(id)a0;
- (void)configDisplayStyleWith:(id)a0;
- (void)displayQuestionPlaceHolder:(BOOL)a0;
- (void)updateQuestionConstraintsWhenHide:(BOOL)a0;
- (void)updateQuestionConstraints;
- (void)updateFrameHeight;
- (void)displayShadowLayer:(BOOL)a0;
- (void)willStartEdit;
- (void)updateFirstResponderText;
- (void)updateEditTypeWithTapPointInSuperView:(struct CGPoint { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })sizeOfString:(id)a0 constrainedToWidth:(double)a1 font:(id)a2;
- (void)refreshPlaceHolderWidth;
- (void)selectOption:(id)a0 voteInfo:(id)a1 completion:(id /* block */)a2;
- (id)tappedVoteInfoForTappedPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)hitTestFromSuperView:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)p_makeSubViewConstraints;
- (struct CGSize { double x0; double x1; })sizeOfString:(id)a0 constrainedToHeight:(double)a1 font:(id)a2;
- (double)p_questionPlaceHolderGap;
- (void)showDisplayMode:(BOOL)a0;
- (id)optionEditViewWithIndex:(unsigned long long)a0;
- (void)addShadowToView:(id)a0 shadowLayer:(id)a1 withOpacity:(double)a2 shadowRadius:(double)a3 andCornerRadius:(double)a4;
- (void)p_updateOPT1Constraints;
- (void)p_updateOPT2Constraints;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)textViewDidBeginEditing:(id)a0;
- (void)textViewDidEndEditing:(id)a0;
- (void)textViewDidChange:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (struct CGSize { double x0; double x1; })getFrameSize:(BOOL)a0;

@end
