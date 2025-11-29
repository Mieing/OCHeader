@class ACCStickerHierarchyManager, ACCStickerContainerView, NSMutableArray;

@interface ACCStickerGroupManager : NSObject

@property (weak, nonatomic) ACCStickerContainerView *containerView;
@property (weak, nonatomic) ACCStickerHierarchyManager *stickerManager;
@property (retain, nonatomic) NSMutableArray *stickerGroupList;

- (id)subStickerViewsInGroup:(id)a0;
- (void)addStickerView:(id)a0;
- (void)removeGroupViewCacheWithGroupId:(id)a0;
- (id)groupViewWithGroupId:(id)a0;
- (void).cxx_destruct;
- (id)initWithContainer:(id)a0;

@end
