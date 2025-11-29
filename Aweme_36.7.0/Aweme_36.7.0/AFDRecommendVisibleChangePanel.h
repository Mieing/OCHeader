@class UIView, NSString, DUXBaseLabel, UIImageView, UIButton, AFDRecommendVisibleChangePanelModel, DUXButton, UILabel, DUXSingleSelectionPanel;

@interface AFDRecommendVisibleChangePanel : UIView <DUXSingleSelectionPanelDelegate>

@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UIImageView *topIconView;
@property (retain, nonatomic) DUXBaseLabel *titleLabel;
@property (retain, nonatomic) DUXSingleSelectionPanel *singleSelectionPanel;
@property (retain, nonatomic) DUXButton *confirmButton;
@property (retain, nonatomic) DUXButton *holdOnButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) AFDRecommendVisibleChangePanelModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)selectionPanel:(id)a0 optionNameAtRow:(long long)a1;
- (void)setupUINew;
- (void)setupUIDefault;
- (long long)indexFromType:(long long)a0;
- (long long)defaultSeletedIndex;
- (void)updateVisibleType:(long long)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;

@end
