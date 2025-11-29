@class AWERecordBeautyCategoryExtraModel, IESCategoryModel, NSMutableArray;
@protocol AWERecordBeautyNodeProtocol;

@interface AWEEditerBeautyCategoryModel : AWERecordBeautyCategoryModel {
    id<AWERecordBeautyNodeProtocol> _parentNode;
    NSMutableArray *_childNodes;
    NSMutableArray *_childExtraNodes;
    AWERecordBeautyCategoryExtraModel *_extra;
}

@property (retain, nonatomic) IESCategoryModel *iesCategoryModel;

- (void)setExtra:(id)a0;
- (id)childExtraNodes;
- (void)p_fillChildItemsWithIESCategoryModel:(id)a0 shouldUseComposerParams:(BOOL)a1;
- (void)addChildExtraNodes:(id)a0;
- (void)removeAllChildNodes;
- (void)removeAllChildExtraNodes;
- (void)setChildExtraNodes:(id)a0;
- (id)initWithIESCategory:(id)a0 shouldUseComposerParams:(BOOL)a1;
- (void)addChildCategory:(id)a0;
- (void)insertChildCategory:(id)a0 atIndex:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)extra;
- (id)childNodes;
- (id)parentNode;
- (id)categoryName;
- (void)setParentNode:(id)a0;
- (void)addChildNode:(id)a0;
- (id)nodeName;
- (id)nodeId;
- (void)setChildNodes:(id)a0;

@end
