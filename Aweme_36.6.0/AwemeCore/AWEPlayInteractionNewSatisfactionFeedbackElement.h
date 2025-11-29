@class NSString, UILabel, ADFeelGoodInfo, UIButton;

@interface AWEPlayInteractionNewSatisfactionFeedbackElement : AWEPlayInteractionNewBottomElement

@property (retain, nonatomic) UILabel *feedbackLabel;
@property (retain, nonatomic) UIButton *workButton;
@property (retain, nonatomic) UIButton *inutileButton;
@property (retain, nonatomic) ADFeelGoodInfo *fdFeelGoodInfo;
@property (copy, nonatomic) NSString *itemID;

- (void)initializeElement;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (BOOL)shouldAppearWithData:(id)a0;
- (void)hideMutexTempElement:(id /* block */)a0;
- (void)inutileButtonAction;
- (void)workButtonAction;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
