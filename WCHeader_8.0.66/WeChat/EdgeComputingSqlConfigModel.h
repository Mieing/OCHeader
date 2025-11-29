@class NSString;

@interface EdgeComputingSqlConfigModel : MMObject <PBCoding, NSCopying>

@property (retain, nonatomic) NSString *configID;
@property (nonatomic) unsigned int reportID;
@property (nonatomic) unsigned int reportMethod;
@property (retain, nonatomic) NSString *sql;
@property (retain, nonatomic) NSString *sqlURL;
@property (retain, nonatomic) NSString *dbPath;
@property (retain, nonatomic) NSString *originalJson;
@property (retain, nonatomic) NSString *sqlMD5;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_configID;
+ (void)PBArrayAdd_reportID;
+ (void)PBArrayAdd_sql;
+ (void)PBArrayAdd_dbPath;
+ (void)PBArrayAdd_originalJson;
+ (void)PBArrayAdd_sqlMD5;
+ (void)PBArrayAdd_reportMethod;
+ (void)PBArrayAdd_sqlURL;
+ (void)initialize;

@end
