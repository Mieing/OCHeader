@class NSSet, NSDictionary, YYMemoryCache, NSBundle, NSString;

@interface AWEPOIParamsDataModelManager : NSObject

@property (copy, nonatomic) NSDictionary *eventItems;
@property (copy, nonatomic) NSDictionary *ruleTokenMap;
@property (copy, nonatomic) NSDictionary *simpleTokenMap;
@property (copy, nonatomic) NSSet *supportedSimpleEvents;
@property (copy, nonatomic) NSSet *supportedRuleEvents;
@property (retain, nonatomic) YYMemoryCache *ruleListCache;
@property (retain, nonatomic) YYMemoryCache *simpleListCache;
@property (retain, nonatomic) NSBundle *simpleBundle;
@property (retain, nonatomic) NSBundle *ruleBundle;
@property (copy, nonatomic) NSString *rootURL;
@property (copy, nonatomic) NSString *fileDirectory;
@property (copy, nonatomic) NSString *commonFileName;
@property (copy, nonatomic) NSString *coreFileName;

- (id)readRuleModelFromDiskForKey:(id)a0;
- (id)readSimpleModelFromDiskForKey:(id)a0;
- (void)addMobsToListWithFilePath:(id)a0;
- (id)infoWithEvent:(id)a0;
- (BOOL)canVerifyEvent:(id)a0 params:(id)a1;
- (id)ruleModelForKey:(id)a0 forbidDisk:(BOOL)a1;
- (id)simpleModelForKey:(id)a0 forbidDisk:(BOOL)a1;
- (void).cxx_destruct;
- (void)setupManager;

@end
