@class NSString, UITableViewCell, EnterTimeItem, UILabel, WCPayTransBankItem, MMUIViewController;
@protocol WCPaySelectArriveTimeItemDelegate;

@interface WCPaySelectArriveTimeItem : WCBaseInfoItem <WCPaySelectArriveTimeViewControllerDelegate> {
    UILabel *m_arriveTimeLabel;
    EnterTimeItem *m_enterTimeItem;
    MMUIViewController *m_currentVC;
    BOOL m_isMaintenance;
}

@property (retain, nonatomic) WCPayTransBankItem *m_bankItem;
@property (weak, nonatomic) UITableViewCell *fatherCell;
@property (weak, nonatomic) id<WCPaySelectArriveTimeItemDelegate> m_selectArriveItemDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setCurrentViewController:(id)a0;
- (void)becomeFirstResponder;
- (void)updateView;
- (id)getValue;
- (void)setBankItem:(id)a0;
- (id)getArriveTimeString;
- (id)getAccessibilityLabel;
- (void)OnWCPaySelectArriveTimeViewControllerSelectArriveTime:(id)a0;
- (void)updateWithEnterTimeItem:(id)a0;
- (void)clearItem;
- (void).cxx_destruct;

@end
