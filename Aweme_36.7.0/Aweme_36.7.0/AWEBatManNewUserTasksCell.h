@class UIImageView, UILabel;

@interface AWEBatManNewUserTasksCell : UIView

@property (weak, nonatomic) UIImageView *iconImg;
@property (weak, nonatomic) UILabel *CellTitleLbl;
@property (weak, nonatomic) UILabel *CellSubTitleLbl;
@property (weak, nonatomic) UIImageView *benefitsCellBgImgView;
@property (nonatomic) BOOL isSelected;

- (void)setTasksModel:(id)a0 withSelected:(BOOL)a1;
- (void)setTaskCellSelectedWithTitle:(id)a0;
- (void)setTaskCellUnusableWithTitle:(id)a0;
- (void)setTaskCellUnfinishedWithTitle:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)createUI;

@end
