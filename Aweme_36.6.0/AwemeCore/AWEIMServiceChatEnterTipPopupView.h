@class DUXBasicSheet, NSArray, UIImageView, AWEIMServiceMsgUpgradePopUpInfoModel, UILabel, NSString, UITableView;

@interface AWEIMServiceChatEnterTipPopupView : UIView <UITableViewDataSource, UITableViewDelegate>

@property (retain, nonatomic) UIImageView *titleImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) AWEIMServiceMsgUpgradePopUpInfoModel *model;
@property (weak, nonatomic) DUXBasicSheet *basicSheet;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSArray *viewModels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)__setupUI;
- (double)p_tableViewHeight;
- (void)p_generateContentVMs;
- (double)p_PopupViewHeight;
- (void)onTapAction:(id)a0;
- (id)p_generateTipsAttributeStringWithTipsModel:(id)a0;
- (void)showPopupViewOnViewController:(id)a0;
- (id)getDefaultContentAttributeString;
- (void).cxx_destruct;
- (id)contentAttributes;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)style;

@end
