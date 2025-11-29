@class AWESearchSynthesisNovelSlider, UIView, NSString, AWESearchSynthesisNovelFailView, AWESearchSynthesisNovelCatalogTopView, AWESearchSynthesisNovelCatalogData, AWESearchSynthesisNovelDataEngine, UITableView, UIImage, AWESearchSynthesisNovelLoadingView, AWESearchSynthesisNovelBookSettingConfig;
@protocol AWESearchSynthesisNovelCatalogViewDelegate;

@interface AWESearchSynthesisNovelCatalogView : UIView <UITableViewDelegate, UITableViewDataSource, AWESearchSynthesisNovelSliderDelegate, AWESearchSynthesisNovelCatalogTopViewDelegate>

@property (retain, nonatomic) AWESearchSynthesisNovelCatalogTopView *topView;
@property (retain, nonatomic) UIView *separatorView;
@property (retain, nonatomic) UIView *topBlankView;
@property (retain, nonatomic) AWESearchSynthesisNovelLoadingView *loadingView;
@property (retain, nonatomic) AWESearchSynthesisNovelFailView *failView;
@property (retain, nonatomic) UITableView *contentTableView;
@property (retain, nonatomic) AWESearchSynthesisNovelSlider *slider;
@property (retain, nonatomic) AWESearchSynthesisNovelBookSettingConfig *configData;
@property (copy, nonatomic) id /* block */ loadMoreHandler;
@property (copy, nonatomic) NSString *catalogUrl;
@property (weak, nonatomic) AWESearchSynthesisNovelDataEngine *novelDataEngine;
@property (weak, nonatomic) id<AWESearchSynthesisNovelCatalogViewDelegate> delegate;
@property (nonatomic) BOOL isAppendNativeReader;
@property (nonatomic) BOOL isReverse;
@property (nonatomic) BOOL isShowInWindow;
@property (readonly, nonatomic) AWESearchSynthesisNovelCatalogData *catalogData;
@property (retain, nonatomic) UIView *onCatalogShowRightBackgroundView;
@property (retain, nonatomic) UIImage *loadImage;
@property (retain, nonatomic) UIImage *darkLoadImage;
@property (copy, nonatomic) id /* block */ catalogViewLoadMoreConfigureBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)slider:(id)a0 valueDidChanged:(float)a1;
- (void)configLoadMoreFooter;
- (void)onOrderClick;
- (void)onCatalogBookDescClick;
- (void)reloadChapterWithIsJumpToCurrentChapter:(BOOL)a0;
- (void)loadChaptersJumpCurrentIndex:(BOOL)a0;
- (long long)reverseIndex:(long long)a0;
- (void)loadmoreChapterList;
- (void)updateWithCatalogData:(id)a0;
- (void)updateWithConfigData:(id)a0;
- (void)onChapterDataReady;
- (void)onSliderValueChange:(id)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)layoutSubviews;

@end
