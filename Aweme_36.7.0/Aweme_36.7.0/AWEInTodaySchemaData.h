@class AWEInTodaySchemaStrategyConfig, NSString, AWEInTodaySchemaUIConfig, AWEInTodaySchemaMobConfig, AWEInTodaySchemaPublishConfig;

@interface AWEInTodaySchemaData : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL hasAweme;
@property (nonatomic) BOOL verifyAuthorization;
@property (copy, nonatomic) NSString *scene;
@property (retain, nonatomic) AWEInTodaySchemaMobConfig *mobConfig;
@property (retain, nonatomic) AWEInTodaySchemaStrategyConfig *strategyConfig;
@property (retain, nonatomic) AWEInTodaySchemaUIConfig *uiConfig;
@property (retain, nonatomic) AWEInTodaySchemaPublishConfig *publishConfig;
@property (copy, nonatomic) NSString *trackTitle;
@property (copy, nonatomic) NSString *onlyThemes;
@property (nonatomic) BOOL isFromAnchor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
