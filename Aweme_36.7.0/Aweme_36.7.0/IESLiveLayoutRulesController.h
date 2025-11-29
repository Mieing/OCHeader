@class IESLiveStackView, NSMutableDictionary, NSArray, NSMutableArray;

@interface IESLiveLayoutRulesController : NSObject

@property (weak, nonatomic) IESLiveStackView *view;
@property (retain, nonatomic) NSMutableDictionary *items;
@property (retain, nonatomic) NSMutableArray *itemArray;
@property (copy, nonatomic) NSArray *rules;
@property (nonatomic) long long limit;
@property (nonatomic) BOOL reversed;
@property (nonatomic) BOOL disabled;

- (BOOL)isAllowList:(id)a0;
- (void)enumerateArrangedViewsUsingBlock:(id /* block */)a0;
- (void)bindingView:(id)a0;
- (BOOL)canInsertType:(id)a0;
- (void)relimitItems;
- (void)enumerateArrangedItemsUsingBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)removeItem:(id)a0;
- (void)insertItem:(id)a0;
- (id)init;
- (id)itemForType:(id)a0;

@end
