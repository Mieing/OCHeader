@class UIView, ShelfInfo, ShelfCardInfo, NSString, UIImageView, UIButton, IESLiveNativeAppShelfCardManageCell, UITextField, IESLiveNativeAppApi, UILabel;
@protocol IESLiveNativeAppSellingPointEditorDelegate;

@interface IESLiveNativeAppShelfCardSellingPointEditorViewController : UIViewController <UITextFieldDelegate, UIGestureRecognizerDelegate>

@property (retain, nonatomic) ShelfInfo *shelfInfo;
@property (nonatomic) unsigned long long cardIndex;
@property (retain, nonatomic) ShelfCardInfo *cardInfo;
@property (retain, nonatomic) UIView *editContentView;
@property (retain, nonatomic) UIImageView *guideImage;
@property (retain, nonatomic) UILabel *guideLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *naviBackButton;
@property (retain, nonatomic) IESLiveNativeAppShelfCardManageCell *cell;
@property (retain, nonatomic) UITextField *textEditor;
@property (retain, nonatomic) UILabel *separateLine;
@property (retain, nonatomic) UILabel *textDesc;
@property (retain, nonatomic) UIButton *saveButton;
@property (retain, nonatomic) NSString *tempSellingPoint;
@property (copy, nonatomic) NSString *passedText;
@property (retain, nonatomic) IESLiveNativeAppApi *api;
@property (nonatomic) BOOL hasReported;
@property (weak, nonatomic) id<IESLiveNativeAppSellingPointEditorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)textFieldDidChanged:(id)a0;
- (void)closeButtonDidClick:(id)a0;
- (void)cutText;
- (void)saveButtonDidClick:(id)a0;
- (void)naviBackButtonDidClick:(id)a0;
- (void)blankAreaDidClick:(id)a0;
- (void)updateSellingPointText;
- (void)updateTextDesc;
- (void)updateCardPreviewCell;
- (void)trackSellingPointEditorShow;
- (void)workBeforeClose;
- (void)saveSellingPoint;
- (void)trackSellingPoint:(id)a0 isPassed:(BOOL)a1 rejectReason:(id)a2;
- (void)updatePreviewSellingPoint;
- (void)trackSellingPointEdited;
- (id)initWithShelfInfo:(id)a0 cardIndex:(unsigned long long)a1;
- (void)close;
- (void).cxx_destruct;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)addObserver;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (BOOL)stringContainsEmoji:(id)a0;
- (void)setUpUI;

@end
