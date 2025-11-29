@class ACCTagsCameraPositionListDataController, NSArray, NSString, UIView;

@interface ACCEditTagsCameraPositionPickerViewController : ACCTagsItemPickerViewController <ACCEditTagsCameraPositionTableViewCellDelegate>

@property (copy, nonatomic) NSArray *cameraPositionList;
@property (retain, nonatomic) UIView *addNewCameraPositionView;
@property (retain, nonatomic) ACCTagsCameraPositionListDataController *cameraPositionService;
@property (copy, nonatomic) NSString *selectedCameraPositionID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configCell:(id)a0;
- (void)loadMoreWithKeyword:(id)a0 completion:(id /* block */)a1;
- (void)refreshRecommendData;
- (void)fetchRecommendData;
- (void)searchWithKeyword:(id)a0 completion:(id /* block */)a1;
- (id)tagTypeString;
- (id)tagModelForIndexPath:(id)a0;
- (void)handleCreateNewCameraPositionWithScene:(unsigned long long)a0;
- (void)handleCreateNewCameraPositionInSearchBar;
- (void)didTapOnCameraPositionCover:(id)a0;
- (id)emptyResultText;
- (id)emptyActionButtonText;
- (id)attrStringForCreateCustomTag;
- (void)handleTapOnFooter;
- (void)handleTapOnActionButtonInEmptyView;
- (BOOL)shouldShowCreateCustomTagFooter;
- (BOOL)needNoMoreFooterText;
- (id)searchBarPlaceHolder;
- (id)searchBarRightView;
- (BOOL)shouldRecommendDataWithCurrentFrame;
- (void)restoreRecommendData;
- (void)preFetchRecommendData;
- (id)itemTrackerParamsForItemAtIndexPath:(id)a0 isSelect:(BOOL)a1;
- (void).cxx_destruct;
- (id)dataSource;
- (long long)type;
- (double)headerHeight;
- (void)viewDidLoad;
- (Class)cellClass;
- (id)itemTitle;
- (long long)indexOfItem:(id)a0;
- (id)cellIdentifier;
- (double)cellHeight;

@end
