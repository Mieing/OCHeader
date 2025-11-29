@class NSArray, NSNumber;

@interface RTVListViewControllerContext : RTVCollectionViewControllerContext

@property (readonly, nonatomic) BOOL needSearch;
@property (readonly, copy, nonatomic) NSArray *plugins;
@property (retain, nonatomic) NSNumber *minimumLineSpacing;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } sectionInset;
@property (nonatomic) long long bounceDisable;

- (id)initWithPlugins:(id)a0 needSearch:(BOOL)a1;
- (void).cxx_destruct;

@end
