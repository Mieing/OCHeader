@class IESDPBShrinkConfig, NSData, IESDPBShrinkNode, IESDPBDefinitionConfig, IESDPBDefinitionNode;

@interface IESDPBDecoderModel : NSObject

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) IESDPBDefinitionConfig *definitionConfig;
@property (retain, nonatomic) IESDPBDefinitionNode *dataDefinitionNode;
@property (retain, nonatomic) IESDPBDefinitionNode *extraDefinitionNode;
@property (retain, nonatomic) IESDPBShrinkConfig *shrinkConfig;
@property (retain, nonatomic) IESDPBShrinkNode *dataShrinkNode;
@property (retain, nonatomic) IESDPBShrinkNode *extraShrinkNode;
@property (nonatomic) BOOL needExtra;
@property (nonatomic) BOOL numberToString;
@property (nonatomic) BOOL shouldCompleteIDLField;
@property (nonatomic) BOOL dataRepeatable;

- (void).cxx_destruct;
- (id)init;

@end
