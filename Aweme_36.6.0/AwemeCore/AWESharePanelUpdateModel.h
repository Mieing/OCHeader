@class NSArray;
@protocol AWESharePanelListItem;

@interface AWESharePanelUpdateModel : NSObject

@property (weak, nonatomic) id<AWESharePanelListItem> listItem;
@property (nonatomic) long long sectionIndex;
@property (copy, nonatomic) NSArray *deleteItemsAtIndexPaths;
@property (copy, nonatomic) NSArray *reloadItemsAtIndexPaths;
@property (copy, nonatomic) NSArray *insertItemsAtIndexPaths;

- (id)initWithSectionIndex:(long long)a0 listItem:(id)a1 deleteItemsAtIndexPaths:(id)a2 reloadItemsAtIndexPaths:(id)a3 insertItemsAtIndexPaths:(id)a4;
- (void).cxx_destruct;

@end
