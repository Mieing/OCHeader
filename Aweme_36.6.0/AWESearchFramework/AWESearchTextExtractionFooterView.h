@class UIButton, UIView;

@interface AWESearchTextExtractionFooterView : UIView

@property (retain, nonatomic) UIView *backView;
@property (retain, nonatomic) UIButton *extractionButton;
@property (retain, nonatomic) UIView *disableBackView;
@property (retain, nonatomic) UIButton *tipsButton;
@property (nonatomic) BOOL canExtraction;
@property (copy, nonatomic) id /* block */ extractBlock;

- (void)extractionButtonClick;
- (void).cxx_destruct;
- (id)init;
- (void)safeAreaInsetsDidChange;
- (void)setupUI;

@end
