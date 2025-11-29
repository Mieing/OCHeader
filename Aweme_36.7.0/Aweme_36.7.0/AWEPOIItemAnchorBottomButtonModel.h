@class NSString, AWEPOISchemaModel, AWEURLModel;

@interface AWEPOIItemAnchorBottomButtonModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) AWEURLModel *iconURL;
@property (retain, nonatomic) AWEPOISchemaModel *schemaModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
