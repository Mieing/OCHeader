@class NSArray, UIImageView, AWEPOIUgcBottomBarModel, UILabel, UIView;

@interface AWEPOIUgcBottomBarView : UIView

@property (retain, nonatomic) AWEPOIUgcBottomBarModel *model;
@property (copy, nonatomic) id /* block */ onBtnClickedBlk;
@property (retain, nonatomic) UIImageView *backgroundImgView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *btnsContainer;
@property (copy, nonatomic) NSArray *iconBtns;

- (void)updateTitleColor:(id)a0 borderColor:(id)a1;
- (id)createControlWithIconModel:(id)a0;
- (void)onBtnClick:(id)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (id)createSeparatorView;
- (void)setupUI;

@end
