@class NSArray;

@interface MJShootVisagePanelViewModel : NSObject

@property (retain, nonatomic) NSArray *items;

- (id)initWithConfig:(id)a0;
- (id)initWithItems:(id)a0;
- (void)loadItems:(id)a0;
- (long long)numberOfItemsInSection:(long long)a0;
- (long long)numberOfSections;
- (id)itemAtIndexPath:(id)a0;
- (void).cxx_destruct;

@end
