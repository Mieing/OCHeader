@class WAPlateItem, WAPlateInputView, NSString, UILabel, NSObject, MMUILabel;
@protocol WAPlateEditViewControllerDelegate;

@interface WAPlateEditViewController : MMUIViewController <WAPlateInputViewDelegate>

@property (retain, nonatomic) WAPlateInputView *plateInputView;
@property (retain, nonatomic) WAPlateItem *plateItem;
@property (retain, nonatomic) MMUILabel *inputReminder;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) NSString *createSubDesc;
@property (weak, nonatomic) NSObject<WAPlateEditViewControllerDelegate> *delegate;
@property (nonatomic) BOOL firstIn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPlateItem:(id)a0 Style:(unsigned long long)a1;
- (id)init;
- (id)navigationBarBackgroundColor;
- (void)initSubviewsWithStyle:(unsigned long long)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidBePoped:(BOOL)a0;
- (void)configPlateItem:(id)a0;
- (BOOL)disMissSelf;
- (void)onFinishBtnClicked;
- (void)OnInputCanFinish:(id)a0;
- (void)onInputDisableFinish;
- (void).cxx_destruct;

@end
