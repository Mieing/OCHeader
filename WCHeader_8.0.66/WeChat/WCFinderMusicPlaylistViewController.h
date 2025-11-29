@class NSString, WCFinderStreamFooterView, UICollectionView, NSDictionary;
@protocol WCFindeProfileMusicSectionBase;

@interface WCFinderMusicPlaylistViewController : MMUIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, WCFinderStreamFooterViewActionDelegate, WCFinderStreamProfileMusicPlaylistPageDelegate>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) WCFinderStreamFooterView *footerView;
@property (retain, nonatomic) id<WCFindeProfileMusicSectionBase> viewModel;
@property (nonatomic) void /* function */ *cellUpdater;
@property (copy, nonatomic) id /* block */ clickAction;
@property (nonatomic) struct SDKReportInfo { NSString *viewId; id /* block */ paramsBlock; int commentScene; long long proto; struct SDKPageReportInfo { long long pageId; NSString *pageName; NSDictionary *pageReportParams; } pageInfo; } reporter;
@property (nonatomic) BOOL isAuthor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)playListVCWithCategory:(id)a0 cellUpdater:(void /* function */ *)a1 clickAction:(id /* block */)a2 reporter:(struct SDKReportInfo { id x0; id /* block */ x1; int x2; long long x3; struct SDKPageReportInfo { long long x0; id x1; id x2; } x4; })a3;

- (void)viewDidLoad;
- (void)dealloc;
- (id)navigationBarBackgroundColor;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)didClickStreamFooterRefresh:(id)a0;
- (BOOL)isEnableStreamFooterTrigerLoading:(id)a0;
- (void)didClickStreamFooterPostFromSnsAction:(id)a0;
- (void)requestMore;
- (void)scrollViewDidScroll:(id)a0;
- (void)onPlayList:(id)a0 appendDataAtRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)onPlayList:(id)a0 onLoadSuccess:(BOOL)a1;
- (void)bindAlbumSDKReport:(id)a0 item:(id)a1;
- (void)bindPageSDKReport;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
