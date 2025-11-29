@class UIFont, NSString, UITextView, NSMutableArray, UIButton;

@interface AWEPollStickerMutiOptionsView : UIView <UITextViewDelegate, AWEPollStickerOptionWapperViewDelegate, AWEPollStickerViewProtocol>

@property (copy, nonatomic) NSString *placeHolderStr;
@property (retain, nonatomic) UIFont *placeHolderFont;
@property (nonatomic) double placeHolderWidth;
@property (nonatomic) BOOL reLayoutQuestionWhenEmpty;
@property (nonatomic) BOOL isStickerViewEdit;
@property (retain, nonatomic) UITextView *questionView;
@property (nonatomic) unsigned long long currentEditType;
@property (copy, nonatomic) id /* block */ finishEditBlock;
@property (copy, nonatomic) id /* block */ reLayoutEndBlock;
@property (retain, nonatomic) NSMutableArray *optionViews;
@property (retain, nonatomic) UIButton *addOptionButton;
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
- (BOOL)isLimitAddOptionsButton;
- (BOOL)isLimitDeleteOptionsButton;
- (struct CGSize { double x0; double x1; })sizeOfString:(id)a0 constrainedToHeight:(double)a1 font:(id)a2;
- (void)reLayoutWhenOptionViewsChange;
- (void)updateAddDeleteButtonAlpha;
- (void)actionAddOption;
- (double)p_questionPlaceHolderGap;
- (void)showDisplayMode:(BOOL)a0;
- (void)deleteOption:(id)a0;
- (id)optionEditViewWithIndex:(unsigned long long)a0;
- (void)p_updateOPTConstraintsWithIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)textViewDidBeginEditing:(id)a0;
- (void)textViewDidEndEditing:(id)a0;
- (void)textViewDidChange:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (struct CGSize { double x0; double x1; })getFrameSize:(BOOL)a0;

@end
