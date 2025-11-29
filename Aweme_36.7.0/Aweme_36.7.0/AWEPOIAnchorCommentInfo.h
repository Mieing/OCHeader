@class AWEPOISchemaModel, NSArray, NSString, AWEPOIItemAnchorContentModel, NSDictionary, AWEURLModel;

@interface AWEPOIAnchorCommentInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *descs;
@property (copy, nonatomic) NSString *grayLabel;
@property (retain, nonatomic) AWEPOIItemAnchorContentModel *anchorContent;
@property (nonatomic) BOOL existRelationPOI;
@property (copy, nonatomic) NSString *anchorContentJson;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (retain, nonatomic) AWEPOISchemaModel *schemaModel;
@property (retain, nonatomic) AWEURLModel *icon;
@property (retain, nonatomic) AWEURLModel *darkIcon;
@property (copy, nonatomic) NSString *btmStandData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconJSONTransformer;
+ (id)darkIconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
