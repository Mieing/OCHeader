@class NSMutableArray;
@protocol AWERecordBeautyNodeProtocol;

@interface AWEEditerBeautyItemModel : AWERecordBeautyItemModel {
    id<AWERecordBeautyNodeProtocol> _parentNode;
    NSMutableArray *_childNodes;
    NSMutableArray *_childExtraNodes;
    NSMutableArray *_childItems;
}

- (id)initWithIESEffect:(id)a0 shouldUseComposerParams:(BOOL)a1;
- (BOOL)isCollection;
- (id)beautifyItemModels;
- (id)childExtraNodes;
- (void)addChildExtraNodes:(id)a0;
- (void)removeAllChildNodes;
- (void)removeAllChildExtraNodes;
- (void)setChildExtraNodes:(id)a0;
- (id)initWithIESEffect:(id)a0;
- (id)firstBeautifyItemModel;
- (void).cxx_destruct;
- (id)childNodes;
- (id)parentNode;
- (id)childItems;
- (void)setChildItems:(id)a0;
- (void)setParentNode:(id)a0;
- (void)addChildNode:(id)a0;
- (id)nodeName;
- (id)nodeId;
- (void)setChildNodes:(id)a0;

@end
