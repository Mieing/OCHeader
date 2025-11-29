@class NSString, WCFinderFeedPickerParams;
@protocol WCFinderSearchPickerViewControllerDelegate;

@interface WCFinderSearchPickerViewController : WCFinderSearchViewController <WCFinderSearchHistoryListViewDelegate>

@property (retain, nonatomic) WCFinderFeedPickerParams *params;
@property (weak, nonatomic) id<WCFinderSearchPickerViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithParams:(id)a0;
- (void)viewDidLoad;
- (BOOL)shouldCustomHandleSelectedItem;
- (void)customHandleSelectedItem:(id)a0 viewModel:(id)a1 index:(long long)a2;
- (id)getSearchViewModel;
- (int)searchHistoryListViewEnterScene;
- (void).cxx_destruct;

@end
