@class MMUITextField, NSString, MMFinderLiveRewardWishView, UIView, MMUIButton, MMUILabel;
@protocol MMFinderLiveRewardWishInputViewDelegate;

@interface MMFinderLiveRewardWishInputView : MMPageSheetBaseView <UITextFieldDelegate>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *rewardCountTextFieldBackgroundView;
@property (retain, nonatomic) MMUITextField *rewardCountTextField;
@property (retain, nonatomic) MMUIButton *backButton;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUIButton *doneButton;
@property (nonatomic) double contentViewHeight;
@property (weak, nonatomic) id<MMFinderLiveRewardWishInputViewDelegate> operationDelegate;
@property (weak, nonatomic) MMFinderLiveRewardWishView *targetWishView;
@property (nonatomic) unsigned long long maxTargetCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContentViewHeight:(double)a0;
- (void)dealloc;
- (void)initUI;
- (void)layoutUI;
- (void)layoutRewardCountTextField;
- (void)layoutSubviews;
- (void)pageSheetWillAppear;
- (void)pageSheetWillDisappear;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)onTextFieldHideKeyBoard;
- (void)onTextFieldChanged:(id)a0;
- (void)onContentViewTapped;
- (void)backAction;
- (void)onDoneButtonClicked:(id)a0;
- (void).cxx_destruct;

@end
