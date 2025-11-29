@class NSArray, AWESearchAIGCSugDataManager, NSString, UITableView;
@protocol AWESearchAIGCInputSugViewDelegate;

@interface AWESearchAIGCInputSugView : UIView <UITableViewDataSource, UITableViewDelegate, UIGestureRecognizerDelegate, AWESearchAIGCSugDataManagerDelegate>

@property (weak, nonatomic) id<AWESearchAIGCInputSugViewDelegate> delegate;
@property (retain, nonatomic) UITableView *sugListView;
@property (retain, nonatomic) AWESearchAIGCSugDataManager *dataManager;
@property (copy, nonatomic) NSArray *cellViewModels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)requestExtraParams:(id)a0;
- (void)startSugWithText:(id)a0;
- (void)changeSugWithText:(id)a0;
- (void)stopSug;
- (void)trackSugInputClickWithQuery:(id)a0;
- (void)trackTrendingWordsClickWithCellViewModel:(id)a0;
- (void)trackSugClickWithCellViewModel:(id)a0;
- (void)trackTrendingWordsShowWithCellViewModel:(id)a0;
- (void)trackTrendingShowWithSugData:(id)a0;
- (void)refreshSugList:(id)a0 sugData:(id)a1;
- (void)inputSendQuery:(id)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)initWithDelegate:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)layoutSubviews;
- (void)touchAction:(id)a0;

@end
