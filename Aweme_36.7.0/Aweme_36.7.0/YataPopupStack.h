@class YataPopupLayer, NSMutableArray, YataPopupManager;
@protocol YataInstanceInnerInterface;

@interface YataPopupStack : NSObject

@property (retain, nonatomic) NSMutableArray *popArray;
@property (weak, nonatomic) YataPopupManager *popupManager;
@property (retain, nonatomic) YataPopupLayer *popupLayer;
@property (weak, nonatomic) id<YataInstanceInnerInterface> yataInstance;

- (id)currentPopupElementNodeKeys;
- (id)stackTopElementKey;
- (void)updateWithPopupArray:(id)a0;
- (id)initWithYataInstance:(id)a0 popupManager:(id)a1;
- (id)configModelWithRenderNodeKey:(id)a0;
- (void)removeWithPopupRootKey:(id)a0 completion:(id /* block */)a1;
- (void)pushWithPopupRootStructureNode:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
