@class NSString, NSArray, UILabel, UIButton;

@interface AWESearchFeelGoodBottomDialogContentView : UIView

@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) UIButton *leftButton;
@property (retain, nonatomic) UIButton *rightButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (nonatomic) double onLoadTime;
@property (retain, nonatomic) NSString *titleID;
@property (copy, nonatomic) NSArray *optionIdList;
@property (copy, nonatomic) id /* block */ leftButtonDidClick;
@property (copy, nonatomic) id /* block */ rightButtonDidClick;
@property (copy, nonatomic) id /* block */ closeButtonDidClick;
@property (copy, nonatomic) id /* block */ clickContentBlock;

- (void)showToast;
- (void)rightButtonClicked:(id)a0;
- (void)closeButtonClicked:(id)a0;
- (void)leftButtonClicked:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
