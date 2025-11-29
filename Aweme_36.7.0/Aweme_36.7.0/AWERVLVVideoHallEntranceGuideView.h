@class AWETheaterEntranceGuideModel, BDImageView, UIImageView, DUXButton, UILabel, UIView, UIButton;

@interface AWERVLVVideoHallEntranceGuideView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *tipContentLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) DUXButton *addButton;
@property (retain, nonatomic) AWETheaterEntranceGuideModel *model;
@property (retain, nonatomic) BDImageView *panelImageView;
@property (copy, nonatomic) id /* block */ closeBtnClick;
@property (copy, nonatomic) id /* block */ closeBlock;

- (void)didClickActionButton;
- (void)configWithModel:(id)a0;
- (void)p_closeButtonTapped;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
