@class NSString, NSMutableArray;
@protocol WCPayCreditPaySelectQuestionViewControllerDelegate;

@interface WCPayCreditPaySelectQuestionViewController : WCPayBaseViewController {
    id<WCPayCreditPaySelectQuestionViewControllerDelegate> m_delegate;
    long long m_uiLastSelectedQuestionID;
    NSMutableArray *m_aryQuestion;
}

@property (retain, nonatomic) NSString *m_nsLastSelectedQuestionID;

- (id)initWithQuestionAry:(id)a0 withLastSelectedQuestionID:(id)a1;
- (void)initNavigationBar;
- (void)setDelegate:(id)a0;
- (void)onBack;
- (double)getQuestionItemHeight:(id)a0;
- (void)initTableView;
- (void)makeInfoCell:(id)a0 cellInfo:(id)a1;
- (void)clickCell:(id)a0 indexPath:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;

@end
