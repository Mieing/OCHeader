@class IESLiveNewGiftPanelContext, NSDictionary, IESLiveGiftPanelDataSharing;

@interface IESLiveDynamicGiftPanelItemBuilder : NSObject

@property (weak, nonatomic) IESLiveGiftPanelDataSharing *currentPanelDataSharing;
@property (retain, nonatomic) IESLiveNewGiftPanelContext *context;
@property (copy, nonatomic) NSDictionary *cachedTopItems;
@property (copy, nonatomic) NSDictionary *cachedDynamicItems;
@property (copy, nonatomic) NSDictionary *cachedBottomItems;
@property (copy, nonatomic) NSDictionary *cachedSearchItems;

- (void)updatePanelDataSharing:(id)a0;
- (id)bottomItems;
- (id)topItemClass;
- (id)buildItems:(id)a0 cache:(id)a1 operator:(long long)a2;
- (id)buildCache:(id)a0;
- (id)bottomItemClass;
- (id)searchItemClass;
- (id)dynamicItemClass;
- (void).cxx_destruct;
- (id)searchItems;
- (id)initWithContext:(id)a0;
- (id)topItems;
- (id)dynamicItems;

@end
