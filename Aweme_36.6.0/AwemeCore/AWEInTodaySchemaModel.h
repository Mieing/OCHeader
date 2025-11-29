@class NSString, AWEInTodaySchemaData, AWEInTodaySchemaMemoriesInfo;

@interface AWEInTodaySchemaModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *hasAweme;
@property (copy, nonatomic) NSString *verifyAuthorization;
@property (copy, nonatomic) NSString *type;
@property (retain, nonatomic) AWEInTodaySchemaData *data;
@property (copy, nonatomic) NSString *dataString;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *shootWay;
@property (copy, nonatomic) NSString *isOwnPhoto;
@property (copy, nonatomic) NSString *useCache;
@property (copy, nonatomic) NSString *enterPage;
@property (nonatomic) BOOL fromFlashMob;
@property (retain, nonatomic) AWEInTodaySchemaMemoriesInfo *memoriesInfo;
@property (copy, nonatomic) NSString *memoriesInfoString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
