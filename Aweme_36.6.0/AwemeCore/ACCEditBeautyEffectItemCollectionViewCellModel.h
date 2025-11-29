@class NSMutableDictionary;

@interface ACCEditBeautyEffectItemCollectionViewCellModel : ACCEditBeautyEffectCollectionViewCellModel

@property (nonatomic) BOOL isOffNode;
@property (nonatomic) BOOL isStyleOffNode;
@property (nonatomic) BOOL isStyleMoreNode;
@property (nonatomic) BOOL isStyleNode;
@property (nonatomic) BOOL isSplitlineNode;
@property (nonatomic, getter=isLeaf) BOOL leaf;
@property (nonatomic) long long cellStatus;
@property (nonatomic, getter=isDownloaded) BOOL downloaded;
@property (nonatomic) BOOL hasParentItem;
@property (retain, nonatomic) NSMutableDictionary *styleExtraCellModelsNodeIdInfo;

- (void).cxx_destruct;

@end
