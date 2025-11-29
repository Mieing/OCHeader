@class NSString;

@interface APCDTOPoiInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *poiId;
@property (copy, nonatomic) NSString *poiName;
@property (copy, nonatomic) NSString *comboPoiList;
@property (copy, nonatomic) NSString *lifeAnchorParams;
@property (copy, nonatomic) NSString *albumWithCamera;
@property (copy, nonatomic) NSString *lifeAnchorParamPersist;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
