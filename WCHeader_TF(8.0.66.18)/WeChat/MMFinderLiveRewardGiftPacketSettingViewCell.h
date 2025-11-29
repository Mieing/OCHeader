@class MMUITextField, MMFinderLiveGiftPacketViewModel, UIImageView, NSString, MMUIButton, MMUILabel;
@protocol MMFinderLiveRewardGiftPacketSettingViewCellDelegate;

@interface MMFinderLiveRewardGiftPacketSettingViewCell : MMTableViewCell <MMFinderLiveGiftResourceMgrExt, UITextFieldDelegate>

@property (retain, nonatomic) UIImageView *thumbnailView;
@property (retain, nonatomic) MMUILabel *displayNameLabel;
@property (retain, nonatomic) MMUILabel *priceLabel;
@property (retain, nonatomic) UIImageView *coinIconView;
@property (nonatomic) BOOL bSelected;
@property (retain, nonatomic) UIImageView *selectedImageView;
@property (retain, nonatomic) MMUITextField *countNumField;
@property (retain, nonatomic) MMUIButton *addButton;
@property (retain, nonatomic) MMUIButton *minusButton;
@property (retain, nonatomic) MMFinderLiveGiftPacketViewModel *viewModel;
@property (copy, nonatomic) id /* block */ becomeFirstResponderBlock;
@property (weak, nonatomic) id<MMFinderLiveRewardGiftPacketSettingViewCellDelegate> cellDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)dealloc;
- (void)resetState;
- (void)updateWithViewModel:(id)a0;
- (void)updateMinusButtonState;
- (void)layoutSubviews;
- (void)layoutUI;
- (double)selectedButtonLeftMargin;
- (struct CGSize { double x0; double x1; })selectedButtonSize;
- (id)selectedImageForSelectedButton;
- (id)unSelectedImageForSelectedButton;
- (void)onBackViewDidTaped:(id)a0;
- (void)onSelectedImageViewDidTaped:(id)a0;
- (void)onCountNumFieldResignFirstResponder;
- (void)onAddButtonClicked:(id)a0;
- (void)onMinusButtonClicked:(id)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)onTextFieldHideKeyBoard;
- (void)onTextFieldChanged:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)onLiveGiftResDownloadCompleted:(id)a0 retry:(unsigned long long)a1 totalLength:(unsigned long long)a2 resType:(long long)a3 productId:(id)a4 downloadUrl:(id)a5;
- (id)getDefaultGiftThumbImage;
- (id)getGiftDisplayName:(id)a0;
- (id)getGiftIconImage:(id)a0;
- (id)getGiftDiscription:(id)a0;
- (id)getGiftDescriptionFont:(id)a0;
- (void).cxx_destruct;

@end
