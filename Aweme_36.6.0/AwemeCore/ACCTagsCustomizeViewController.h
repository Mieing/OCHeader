@class NSString, UIView, NSMutableArray, ACCEditCustomizeTagsEmptyView;

@interface ACCTagsCustomizeViewController : ACCTagsItemPickerViewController <ACCTagsCustomizeTableViewCellDelegate, ACCEditCustomizeTagsEmptyViewDelegate>

@property (retain, nonatomic) NSMutableArray *customTags;
@property (retain, nonatomic) ACCEditCustomizeTagsEmptyView *emptyView;
@property (retain, nonatomic) UIView *bottomView;
@property (nonatomic) BOOL isFromEdit;
@property (nonatomic) BOOL showCreateCustomAlertOnAppear;
@property (copy, nonatomic) NSString *defaultCustomTag;
@property (nonatomic) long long fromTagType;
@property (copy, nonatomic) NSString *fromTagTypeString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tagSource;
- (void)configCell:(id)a0;
- (void)didDeleteCell:(id)a0;
- (double)bottomViewHeight;
- (void)fetchRecommendData;
- (void)didTapOnActionButtonInEmptyView:(id)a0;
- (id)tagTypeString;
- (id)tagModelForIndexPath:(id)a0;
- (void)scrollToItem:(id)a0;
- (BOOL)needNoMoreFooterText;
- (id)itemTrackerParamsForItemAtIndexPath:(id)a0 isSelect:(BOOL)a1;
- (BOOL)needSearchBar;
- (BOOL)needFooter;
- (id)tagModelForCustomTag:(id)a0;
- (BOOL)needNetworkRequest;
- (BOOL)needToTrackClickEvent;
- (id)showCreateCustomAlert;
- (void)removeCustomTag:(id)a0;
- (void)addCustomTag:(id)a0;
- (void)trackCellDisplayAtIndexPath:(id)a0;
- (id)emptyStateView;
- (void).cxx_destruct;
- (id)dataSource;
- (long long)type;
- (double)headerHeight;
- (void)viewDidAppear:(BOOL)a0;
- (id)headerText;
- (Class)cellClass;
- (id)itemTitle;
- (id)cellIdentifier;
- (double)cellHeight;

@end
