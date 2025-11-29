@class NSString, IESLLifeURLModel, IESLLPOISchemaModel;

@interface IESLLPOIItemAnchorBottomButtonModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) IESLLifeURLModel *iconURL;
@property (retain, nonatomic) IESLLPOISchemaModel *schemaModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
