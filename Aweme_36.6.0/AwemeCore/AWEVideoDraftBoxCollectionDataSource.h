@class NSArray, NSSet, NSOperationQueue, NSString;

@interface AWEVideoDraftBoxCollectionDataSource : NSObject

@property (copy, nonatomic) NSArray *cellModels;
@property (copy, nonatomic) NSSet *selectedSet;
@property (nonatomic) BOOL showCameraEntrance;
@property (nonatomic) BOOL hasOutput;
@property (nonatomic) BOOL fromUserClean;
@property (nonatomic) BOOL fromAlbum;
@property (readonly, nonatomic) NSOperationQueue *queue;
@property (readonly, nonatomic) long long draftSource;
@property (nonatomic) BOOL editing;
@property (retain, nonatomic) NSString *shootWay;
@property (nonatomic) BOOL isFeedBack;

- (id)enterFromString;
- (void)configWithRouterParams:(id)a0;
- (BOOL)item_isSelected:(id)a0;
- (void)item_deselect:(id)a0;
- (void)item_deselectAll;
- (void)loadDraftsWithCompletion:(id /* block */)a0;
- (void)item_select:(id)a0;
- (void)item_selectAll:(id /* block */)a0;
- (id)allDraftModels;
- (void)deleteSelectedItems;
- (id)selectedDraftModels;
- (id)selectedDraftIds;
- (long long)selectedDraftsTotalSize;
- (BOOL)isDraftReady:(id)a0;
- (void)makeDraftReady:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
