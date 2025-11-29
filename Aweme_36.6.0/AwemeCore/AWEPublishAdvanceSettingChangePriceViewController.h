@class UIScrollView, NSString, NSArray, NSNumberFormatter, UIButton, UITextField, UILabel, AWEPublishPaymentPreviewItem;

@interface AWEPublishAdvanceSettingChangePriceViewController : UIViewController <UITextFieldDelegate>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *finishButton;
@property (retain, nonatomic) UITextField *textField;
@property (retain, nonatomic) UIScrollView *priceSuggestView;
@property (copy, nonatomic) NSArray *priceSuggestValues;
@property (nonatomic) BOOL isButtonDisable;
@property (nonatomic) BOOL isClickRecommendTag;
@property (retain, nonatomic) NSNumberFormatter *numberFormatter;
@property (retain, nonatomic) AWEPublishPaymentPreviewItem *item;
@property (copy, nonatomic) id /* block */ updateItemBlock;
@property (copy, nonatomic) NSArray *recommendPrice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dux_sheetShouldRecognizeAsynchronousWithGestures;
- (void)configSuggestScrollView;
- (id)createSuggestLabel;
- (void)updateStateWithText:(id)a0;
- (void)finishButtonTapped;
- (void)suggestLabelTapped:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)clearButtonTapped;

@end
