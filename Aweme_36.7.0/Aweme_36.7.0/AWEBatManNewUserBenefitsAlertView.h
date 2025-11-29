@class UIButton, NSArray, UIImageView, AWEBatManTaskViewModel, UILabel, UIView, NSMutableArray;
@protocol AWEBatManNewUserBenefitsAlertViewDelegate;

@interface AWEBatManNewUserBenefitsAlertView : UIView

@property (weak, nonatomic) UIView *rootView;
@property (weak, nonatomic) UILabel *titleLbl;
@property (weak, nonatomic) UILabel *subTitleLbl;
@property (weak, nonatomic) UIImageView *benefitsBgImgView;
@property (weak, nonatomic) UIImageView *closeButtonImgView;
@property (retain, nonatomic) NSMutableArray *taskCells;
@property (retain, nonatomic) NSArray *taskViewModels;
@property (weak, nonatomic) AWEBatManTaskViewModel *activeModel;
@property (weak, nonatomic) UIButton *comfirmButton;
@property (weak, nonatomic) id<AWEBatManNewUserBenefitsAlertViewDelegate> delegate;
@property (nonatomic) long long type;

- (void)updateDataWithModels:(id)a0;
- (void)updateSelectedLbl;
- (void)updateComfirmButtonStatus;
- (void)selectedCell1;
- (void)selectedCell2;
- (void)selectedCell3;
- (void)onComfirmButtonClicked;
- (void).cxx_destruct;
- (id)init;
- (void)show:(id)a0;
- (void)dismissView;
- (void)createUI;

@end
