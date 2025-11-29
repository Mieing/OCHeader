@class NSMutableArray;

@interface ACCStickerHierarchyModel : NSObject

@property (retain, nonatomic) id hierarchyId;
@property (retain, nonatomic) NSMutableArray *stickerViews;

- (void).cxx_destruct;
- (id)init;

@end
