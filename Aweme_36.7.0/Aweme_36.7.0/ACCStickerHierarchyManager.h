@class NSArray, ACCStickerContainerView, NSMutableArray;

@interface ACCStickerHierarchyManager : NSObject

@property (weak, nonatomic) ACCStickerContainerView *containerView;
@property (copy, nonatomic) id /* block */ comparator;
@property (retain, nonatomic) NSMutableArray *models;
@property (retain, nonatomic) NSArray *stickerList;
@property (retain, nonatomic) NSArray *touchStickerViewList;

- (id)allStickerViews;
- (void)removeStickerView:(id)a0;
- (id)stickerViewsWithHierarchyId:(id)a0;
- (id)stickerViewsWithTypeId:(id)a0;
- (id)stickerViewWithContentView:(id)a0;
- (id)topHierarchyId;
- (void)adjustHierarchyWithStickerView:(id)a0 targetHierarchyId:(id)a1;
- (void)activeStickerView:(id)a0;
- (id)touchStickerViews;
- (void)removeAllStickerViews;
- (void)addStickerView:(id)a0;
- (id)initWithContainer:(id)a0 hierarchyComparator:(id /* block */)a1;
- (BOOL)hierarchyInStickerView:(id)a0 higherThanStickerView:(id)a1;
- (void)rebuildStickerList;
- (id)hierarchyIndexForStickerView:(id)a0;
- (void).cxx_destruct;

@end
