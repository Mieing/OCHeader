@class NSMutableArray;
@protocol ACCEditBeautyEffectNodeProtocol;

@interface ACCEditBeautyEffectOffNode : ACCEditBeautyEffectItemModel {
    id<ACCEditBeautyEffectNodeProtocol> _parentNode;
    NSMutableArray *_childNodes;
}

- (void).cxx_destruct;
- (id)iconImageName;
- (id)childNodes;
- (id)parentNode;
- (void)setParentNode:(id)a0;
- (void)addChildNode:(id)a0;
- (id)nodeName;
- (id)nodeId;
- (void)setChildNodes:(id)a0;

@end
