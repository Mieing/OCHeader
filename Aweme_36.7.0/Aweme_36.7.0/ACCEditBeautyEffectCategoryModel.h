@class NSMutableArray, NSString, ACCEditBeautyEffectCategoryExtraModel, IESCategoryModel;
@protocol ACCEditBeautyEffectNodeProtocol;

@interface ACCEditBeautyEffectCategoryModel : NSObject <ACCEditBeautyEffectNodeProtocol>

@property (retain, nonatomic) IESCategoryModel *iesCategoryModel;
@property (nonatomic) BOOL shouldUseComposerParams;
@property (retain, nonatomic) ACCEditBeautyEffectCategoryExtraModel *extra;
@property (retain, nonatomic) NSMutableArray *childCategories;
@property (retain, nonatomic) NSMutableArray *childItems;
@property (weak, nonatomic) id<ACCEditBeautyEffectNodeProtocol> parentNode;
@property (retain, nonatomic) NSMutableArray *childNodes;
@property (retain, nonatomic) NSMutableArray *childExtraNodes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dd_statusInState:(id)a0;
- (void)dd_setStatus:(id)a0 inState:(id)a1;
- (id)dd_observeStatusInManager:(id)a0 block:(id /* block */)a1;
- (void)p_fillChildItemsWithIESCategoryModel:(id)a0 shouldUseComposerParams:(BOOL)a1;
- (void)addChildExtraNodes:(id)a0;
- (void)removeAllChildNodes;
- (void)removeAllChildExtraNodes;
- (id)initWithIESCategory:(id)a0 shouldUseComposerParams:(BOOL)a1;
- (void)addChildCategory:(id)a0;
- (void)insertChildCategory:(id)a0 atIndex:(unsigned long long)a1;
- (id)iesCategoryModelValue;
- (BOOL)shouldUseComposerParamsValue;
- (void).cxx_destruct;
- (id)categoryName;
- (void)addChildNode:(id)a0;
- (id)nodeName;
- (id)nodeId;

@end
