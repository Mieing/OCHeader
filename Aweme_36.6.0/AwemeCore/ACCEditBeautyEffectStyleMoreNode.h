@class NSString, NSArray, NSMutableArray;
@protocol ACCEditBeautyEffectNodeProtocol;

@interface ACCEditBeautyEffectStyleMoreNode : ACCEditBeautyEffectItemModel {
    id<ACCEditBeautyEffectNodeProtocol> _parentNode;
    NSMutableArray *_childNodes;
    NSMutableArray *_childExtraNodes;
}

@property (copy, nonatomic) NSString *currentNodeId;
@property (copy, nonatomic) NSString *currentNodeName;
@property (copy, nonatomic) NSString *currentIconImageName;
@property (copy, nonatomic) NSArray *currentIconURLs;

- (void)updateIconImageName:(id)a0;
- (id)childExtraNodes;
- (id)exposeNodeId;
- (void)updateNodeId:(id)a0;
- (void)updateNodeName:(id)a0;
- (void)updateIconURLs:(id)a0;
- (void)addChildExtraNodes:(id)a0;
- (void)setChildExtraNodes:(id)a0;
- (void).cxx_destruct;
- (id)iconImageName;
- (id)childNodes;
- (id)parentNode;
- (id)iconURLs;
- (void)setParentNode:(id)a0;
- (void)addChildNode:(id)a0;
- (id)nodeName;
- (id)nodeId;
- (void)setChildNodes:(id)a0;

@end
