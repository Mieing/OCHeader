@class NSString, UIImageView, UITextField, UIView, IESLiveGCDTimer, UIButton;
@protocol HTSLiveStickerSearchBarDelegate;

@interface HTSLiveFaceStickerSearchBar : UIView <UITextFieldDelegate>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *lensImageView;
@property (retain, nonatomic) UITextField *textField;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *clearButton;
@property (retain, nonatomic) NSString *placeHolder;
@property (nonatomic) BOOL manually;
@property (retain, nonatomic) IESLiveGCDTimer *sourceTimer;
@property (weak, nonatomic) id<HTSLiveStickerSearchBarDelegate> delegate;
@property (retain, nonatomic) NSString *text;
@property (nonatomic) long long status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clearButtonClicked:(id)a0;
- (void)configWithText:(id)a0;
- (void)animatedClearButton;
- (void)callDelegateTextChangeMethod;
- (void)updatePlaceHolder:(id)a0;
- (void).cxx_destruct;
- (BOOL)textFieldShouldReturn:(id)a0;
- (id)init;
- (void)textFieldDidEndEditing:(id)a0;
- (void)cancelButtonClicked:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)setupUI;
- (void)textFieldDidChange:(id)a0;

@end
