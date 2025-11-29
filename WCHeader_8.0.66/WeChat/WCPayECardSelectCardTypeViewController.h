@class WCPayCardBinInfo, NSString, WCPayCardTypeItem, UIButton;
@protocol WCPayECardSelectCardTypeViewControllerDelegate;

@interface WCPayECardSelectCardTypeViewController : WCPayBaseViewController <WCBaseInfoItemDelegate>

@property (retain, nonatomic) WCPayCardTypeItem *cardTypeItem;
@property (retain, nonatomic) UIButton *footerButton;
@property (retain, nonatomic) WCPayCardBinInfo *selectedCardType;
@property (weak, nonatomic) id<WCPayECardSelectCardTypeViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)reloadTableView;
- (id)makeCellTitleLabel;
- (void)makeInfoCell:(id)a0 cellInfo:(id)a1;
- (id)tableFooterView;
- (void)clickInfoCell:(id)a0;
- (void)onNext;
- (void)WCBaseInfoItemEndEdit:(id)a0;
- (void).cxx_destruct;

@end
