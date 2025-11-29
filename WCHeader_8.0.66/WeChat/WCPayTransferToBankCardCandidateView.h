@class NSString, NSMutableArray, UITableView;
@protocol WCPayTransferToBankCardCandidateViewDelegate;

@interface WCPayTransferToBankCardCandidateView : MMUIView <UITableViewDelegate, UITableViewDataSource> {
    UITableView *m_candidateTableView;
}

@property (nonatomic) unsigned long long m_enMatchRule;
@property (retain, nonatomic) NSMutableArray *m_resultsArray;
@property (retain, nonatomic) NSString *m_inputText;
@property (weak, nonatomic) id<WCPayTransferToBankCardCandidateViewDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initTableView;
- (void)reloadCandidateViewWithMatchResults:(id)a0 matchType:(unsigned long long)a1 inputText:(id)a2;
- (void)initView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reloadCandidateView;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)layoutCell:(id)a0 candidate:(id)a1;
- (void).cxx_destruct;

@end
