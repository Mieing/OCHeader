@class NSString, AWEFavoriteFileDataController, AWEAwemeModel, NSDictionary, NSMutableArray;

@interface AWEFavoriteLongPressHorizontalData : NSObject <AWEInteractionElementPopoverDataProtocol>

@property (retain, nonatomic) AWEFavoriteFileDataController *favoriteFileDataController;
@property (nonatomic) long long clickedIndex;
@property (nonatomic) long long moreButtonType;
@property (retain, nonatomic) NSMutableArray *labelArray;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) NSDictionary *contextDict;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL isStatusChanged;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)elementContentView;
- (void)configContentView:(id)a0 atIndex:(long long)a1;
- (void)loadDataIfNeeded:(id /* block */)a0 releaseBlock:(id /* block */)a1;
- (void)configContentCustomView:(id)a0 atIndex:(long long)a1;
- (id)elementCustomContentView;
- (double)dataItemSpace;
- (struct CGSize { double x0; double x1; })dataItemSize;
- (void)eventOccurAtIndex:(long long)a0 target:(id)a1 sourceView:(id)a2 containerView:(id)a3 eventType:(unsigned long long)a4 completion:(id /* block */)a5;
- (long long)currentDataCount;
- (void)showSnackBarWithIndex:(long long)a0;
- (void)trackAddFavoriteFolderClickWithIndexPath:(long long)a0 clickPosition:(id)a1;
- (void)trackFavoritePanalShow;
- (void)configSingleDataWithContentView:(id)a0 atIndex:(long long)a1;
- (void)configMultiDataWithContentView:(id)a0 atIndex:(long long)a1;
- (id)folderItemName:(long long)a0;
- (void)showFavoriteFolderPopup;
- (void)showAddNewFilePopup;
- (void)trackCreateNewFileClick;
- (void)showSnackBarIfNeeded;
- (void).cxx_destruct;
- (long long)dataCount;

@end
