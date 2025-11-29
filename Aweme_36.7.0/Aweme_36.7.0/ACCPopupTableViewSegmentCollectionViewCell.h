@class UIImageView, ACCSegmentUIControl, UILabel, UIView, UIButton;
@protocol ACCPopupTableViewDataItemProtocol;

@interface ACCPopupTableViewSegmentCollectionViewCell : UITableViewCell

@property (retain, nonatomic) id<ACCPopupTableViewDataItemProtocol> item;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) ACCSegmentUIControl *segmentControl;
@property (retain, nonatomic) UIImageView *infoTagView;
@property (retain, nonatomic) UIButton *infoButton;
@property (nonatomic) BOOL hasViewLayout;
@property (nonatomic) BOOL supportThemeSKin;

+ (double)cellHeight;

- (void)makeConstraint;
- (void)onCellClicked;
- (void)showInfoTip;
- (void)infoButtonClick;
- (void)addUILayoutIfNeed;
- (void)updateWithItem:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;
- (void)pageDidAppear:(BOOL)a0;

@end
