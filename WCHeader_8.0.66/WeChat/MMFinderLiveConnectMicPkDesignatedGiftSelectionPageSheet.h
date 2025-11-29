@class NSString, MMLoadingIndicatorView, MMFinderLiveTaskId, UILabel, NSArray, UITableView;
@protocol MMFinderLiveConnectMicPkDesignatedGiftSelectionPageSheetDelegate;

@interface MMFinderLiveConnectMicPkDesignatedGiftSelectionPageSheet : MMPageSheetBaseView <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) NSString *micVirtualRoomId;
@property (nonatomic) unsigned long long opponentScenario;
@property (retain, nonatomic) MMLoadingIndicatorView *loadingIndicatorView;
@property (retain, nonatomic) UILabel *emptyLabel;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSArray *giftItems;
@property (weak, nonatomic) id<MMFinderLiveConnectMicPkDesignatedGiftSelectionPageSheetDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0 micVirtualRoomId:(id)a1 opponentScenario:(unsigned long long)a2;
- (void)layoutSubviews;
- (void)pageSheetWillAppear;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)initializeComponents;
- (void).cxx_destruct;

@end
