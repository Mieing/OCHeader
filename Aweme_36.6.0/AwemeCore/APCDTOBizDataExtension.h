@class NSArray, NSDictionary, NSString, APCDTOBizDataSearchAIGCModel, NSNumber;

@interface APCDTOBizDataExtension : AWEBaseBizConfigModel <MTLJSONSerializing>

@property (retain, nonatomic) NSDictionary *tempSourceSchemaQueryItems;
@property (retain, nonatomic) NSDictionary *nativeCreateAwemeParams;
@property (copy, nonatomic) NSArray *createAwemeParamsShouldIgnore;
@property (copy, nonatomic) NSNumber *draftAlwaysInvisible;
@property (copy, nonatomic) NSString *sourceSchema;
@property (copy, nonatomic) NSNumber *ignoreShootEvent;
@property (retain, nonatomic) NSString *previousPage;
@property (retain, nonatomic) NSString *magic3Compid;
@property (retain, nonatomic) NSString *magic3Source;
@property (retain, nonatomic) NSString *magic3ActivityId;
@property (retain, nonatomic) NSDictionary *schemaTrackParams;
@property (retain, nonatomic) NSString *musicPublishFrom;
@property (copy, nonatomic) NSNumber *trackShootWhenLandingEditorEnabled;
@property (copy, nonatomic) NSNumber *composerSessionSource;
@property (retain, nonatomic) APCDTOBizDataSearchAIGCModel *searchAIGCModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)sourceSchemaQueryForKey:(id)a0;
- (void).cxx_destruct;

@end
