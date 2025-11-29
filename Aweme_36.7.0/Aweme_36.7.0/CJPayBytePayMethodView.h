@class UITableView, NSMutableDictionary, NSArray, NSString, CJPayBytePayMethodSecondaryCell, CJPayBytePayMethodCell;
@protocol CJPayMethodTableViewDelegate;

@interface CJPayBytePayMethodView : UIView <CJPayMethodTableViewProtocol, UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) CJPayBytePayMethodSecondaryCell *secondaryCellView;
@property (retain, nonatomic) CJPayBytePayMethodCell *addCardCellView;
@property (retain, nonatomic) NSMutableDictionary *addCardCells;
@property (nonatomic) long long loadingIndex;
@property (nonatomic) BOOL isChooseMethodSubPage;
@property (nonatomic) BOOL isFromCombinePay;
@property (weak, nonatomic) id<CJPayMethodTableViewDelegate> delegate;
@property (copy, nonatomic) NSArray *models;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)getCellClass:(id)a0;
- (double)calculBankCardModelHeight:(id)a0;
- (void)scrollToTop;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)startLoading;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)stopLoading;
- (void)setupUI;

@end
