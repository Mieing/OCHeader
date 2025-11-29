@class NSString, NSMutableDictionary, AWEUserWorkCellComponentConfig;

@interface AWEUserWorkCellViewModelPool : NSObject <AWEUserWorkCellViewModelPoolProtocol>

@property (retain, nonatomic) AWEUserWorkCellComponentConfig *componentConfig;
@property (retain, nonatomic) NSMutableDictionary *viewModelDict;
@property (copy, nonatomic) id /* block */ markForceReloadDataBlock;
@property (copy, nonatomic) id /* block */ diggCountHasDiffBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadUserPageAdapterClass;
+ (id)poolWithContext:(id)a0;

- (void)refreshWithData:(id)a0;
- (void)removeAllData;
- (void)configCell:(id)a0 awemeModel:(id)a1 longPressGesture:(BOOL)a2;
- (struct CGSize { double x0; double x1; })refreshWithWidth:(double)a0 indexPath:(id)a1 awemeModel:(id)a2;
- (void)markCell:(id)a0 showWatchVideoMask:(BOOL)a1;
- (void)configCell:(id)a0 isSelected:(BOOL)a1 awemeModel:(id)a2 chooseCallBack:(id /* block */)a3;
- (void)partOfVisibleStatusChangedWith:(id)a0;
- (void)handleMemoryWarning:(id)a0;
- (id)aAWEPadUserPageAdapter;
- (id)viewModelForData:(id)a0;
- (long long)minimumNumberOfCellDisplay:(double)a0 height:(double)a1;
- (BOOL)douGuideTagOnItem:(id)a0 needCheckShow:(BOOL)a1;
- (id)viewModelWithItemID:(id)a0;
- (struct CGSize { double x0; double x1; })normalCellSizeWith:(double)a0 numberOfCellsPerRow:(long long *)a1;
- (id)tagLabelString:(id)a0;
- (BOOL)currentVideoMaskViewShow:(id)a0;
- (void)handleWeakRefreshAwemeNotification:(id)a0;
- (unsigned long long)weakRefreshSycChangeWith:(id)a0 awemeModelDict:(id)a1;
- (BOOL)postReachModelRefresh;
- (void)removeViewModelWithItemID:(id)a0;
- (double)minimumLineSpacingWithWidth:(double)a0;
- (double)minimumInteritemSpacingWithWidth:(double)a0;
- (void)removeViewModelWithModel:(id)a0;
- (void)changeViewModelKey:(id)a0 viewModel:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)appendData:(id)a0;
- (void)dealloc;
- (Class)cellClass;
- (void)setupNotifications;

@end
