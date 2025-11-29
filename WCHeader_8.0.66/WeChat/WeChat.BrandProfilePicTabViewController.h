@interface WeChat.BrandProfilePicTabViewController : UIViewController <UICollectionViewDelegate, BrandProfileTopicViewDelegate, BrandProfileTabVCProtocol, MMRefreshTableFooterDelegate> {
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_reporter;
    void /* unknown type, empty encoding */ $__lazy_storage_$_waterfallLayout;
    void /* unknown type, empty encoding */ $__lazy_storage_$_topicView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dataSource;
    void /* unknown type, empty encoding */ gradientLayer;
    void /* unknown type, empty encoding */ gradientView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_loadingView;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic, weak) void /* unknown type, empty encoding */ topicDelegate;

- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (id)viewController;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)updateSectionWidthInSectionDataList;
- (id)tabTitle;
- (void)setExternalGestureRecognizer:(id)a0;
- (unsigned long long)tabType;
- (void)onTopicButtonClicked:(id)a0;
- (void)onUnfoldButtonClicked;
- (id)initWithUsername:(id)a0 inBrandManagerMode:(BOOL)a1;
- (id)initWithCoder:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;

@end
