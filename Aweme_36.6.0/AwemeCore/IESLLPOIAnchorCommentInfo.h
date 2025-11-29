@class IESLLPOIItemAnchorContentModel, NSArray, NSString, NSDictionary, IESLLPOISchemaModel;

@interface IESLLPOIAnchorCommentInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *descs;
@property (copy, nonatomic) NSString *grayLabel;
@property (retain, nonatomic) IESLLPOIItemAnchorContentModel *anchorContent;
@property (nonatomic) BOOL existRelationPOI;
@property (copy, nonatomic) NSString *anchorContentJson;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (retain, nonatomic) IESLLPOISchemaModel *schemaModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
