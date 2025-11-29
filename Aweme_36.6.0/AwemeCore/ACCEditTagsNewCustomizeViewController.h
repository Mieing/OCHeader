@class UIView, NSString, ACCTagsCustomInputBar;
@protocol ACCEditTagsNewCustomizeViewControllerDelegate;

@interface ACCEditTagsNewCustomizeViewController : ACCTagsItemPickerViewController <ACCTagsCustomInputBarDelegate>

@property (retain, nonatomic) ACCTagsCustomInputBar *customInputBar;
@property (retain, nonatomic) UIView *emptyView;
@property (nonatomic) BOOL showCreateCustomAlertOnAppear;
@property (copy, nonatomic) NSString *defaultCustomTag;
@property (nonatomic) long long fromTagType;
@property (copy, nonatomic) NSString *fromTagTypeString;
@property (weak, nonatomic) id<ACCEditTagsNewCustomizeViewControllerDelegate> customizeDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tagSource;
- (double)bottomViewHeight;
- (void)fetchRecommendData;
- (id)tagTypeString;
- (void)scrollToItem:(id)a0;
- (BOOL)needNoMoreFooterText;
- (void)trackClickConfirmButton;
- (void)inputBar:(id)a0 textDidChange:(id)a1;
- (void)inputBarTextDidBeginEditing:(id)a0;
- (void)inputBarTextDidEndEditing:(id)a0;
- (void)inputBarConfirmButtonClicked:(id)a0;
- (void)clearSearchCondition;
- (void)setupInputBarContent:(id)a0;
- (void)hideConfirmButton;
- (BOOL)needSearchBar;
- (BOOL)needFooter;
- (id)tagModelForCustomTag:(id)a0;
- (BOOL)needNetworkRequest;
- (BOOL)needToTrackClickEvent;
- (id)emptyStateView;
- (void).cxx_destruct;
- (long long)type;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)setLoadStatus:(long long)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (id)itemTitle;
- (void)setupUI;

@end
