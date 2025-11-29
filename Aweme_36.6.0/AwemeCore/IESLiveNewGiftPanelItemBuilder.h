@class NSDictionary, IESLiveNewGiftPanelContext;

@interface IESLiveNewGiftPanelItemBuilder : NSObject

@property (retain, nonatomic) IESLiveNewGiftPanelContext *context;
@property (copy, nonatomic) NSDictionary *cachedTopItems;
@property (copy, nonatomic) NSDictionary *cachedMiddleItems;
@property (copy, nonatomic) NSDictionary *cachedBottomItems;
@property (copy, nonatomic) NSDictionary *cachedSearchItems;

- (id)bottomItems;
- (id)topItemClass;
- (id)buildItems:(id)a0 cache:(id)a1 operator:(long long)a2;
- (id)buildCache:(id)a0;
- (id)bottomItemClass;
- (id)searchItemClass;
- (id)operationItem;
- (id)middleItemClass;
- (id)middleItems;
- (void).cxx_destruct;
- (id)searchItems;
- (id)initWithContext:(id)a0;
- (id)topItems;

@end
