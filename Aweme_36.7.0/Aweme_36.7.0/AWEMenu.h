@class NSArray;

@interface AWEMenu : AWEMenuElement

@property (readonly, copy, nonatomic) NSArray *childMenus;
@property (readonly, nonatomic) long long depth;
@property (readonly, nonatomic) BOOL isLeaf;

- (id)menuAtIndexPath:(id)a0;
- (id)initWithName:(id)a0 childMenus:(id)a1;
- (BOOL)validateIndexPath:(id)a0;
- (void).cxx_destruct;

@end
