@class NSString, NSMutableArray, NSMutableDictionary;

@interface WCPagePathConfigModel : MMObject <PBCoding>

@property (retain, nonatomic) NSString *sid;
@property (retain, nonatomic) NSString *pagePathId;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSMutableArray *pagePathUnits;
@property (nonatomic) unsigned int prePageCount;
@property (retain, nonatomic) NSString *logId;
@property (retain, nonatomic) NSMutableArray *vagueBusinessParams;
@property (retain, nonatomic) NSMutableArray *vagueViewOperations;
@property (nonatomic) BOOL isNeedReportSingle;
@property (retain, nonatomic) NSString *originalJson;
@property (retain) NSMutableDictionary *viewOperationsDicForKey;
@property (retain) NSMutableDictionary *viewOperationsDicForViewID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_sid;
+ (void)PBArrayAdd_pagePathId;
+ (void)PBArrayAdd_pagePathUnits;
+ (void)PBArrayAdd_logId;
+ (void)PBArrayAdd_isNeedReportSingle;
+ (void)PBArrayAdd_originalJson;
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_prePageCount;
+ (void)PBArrayAdd_vagueBusinessParams;
+ (void)PBArrayAdd_vagueViewOperations;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (void)initCacheDictionary;
- (id)toString;
- (void).cxx_destruct;

@end
