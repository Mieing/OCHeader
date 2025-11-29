@class NSString, UIImageView, UILabel, UIView, UIButton;
@protocol ACCSwitchProtocol, ACCPopupTableViewCellDelegateProtocol, ACCPopupTableViewDataItemProtocol;

@interface ACCPopupTableViewBinarySwitchCell : UITableViewCell <ACCPopupTableViewCellProtocol>

@property (retain, nonatomic) id<ACCPopupTableViewDataItemProtocol> item;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) id<ACCSwitchProtocol> switcher;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (retain, nonatomic) UIButton *infoButton;
@property (weak, nonatomic) id<ACCPopupTableViewCellDelegateProtocol> delegate;
@property (nonatomic) BOOL supportThemeSKin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)cellHeight;

- (void)makeConstraint;
- (void)onCellClicked;
- (id)switcherContent;
- (void)showInfoTip;
- (void)infoButtonClick;
- (void)updateWithItem:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;

@end
