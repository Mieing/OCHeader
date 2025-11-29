@class NSString;

@interface MinimizeTaskExtInfo : MMObject <PBCoding, WCTTableCoding>

@property (nonatomic) unsigned long long generateType;
@property (nonatomic) unsigned int generateScene;
@property (nonatomic) unsigned long long bizScene;
@property (retain, nonatomic) NSString *bizId;
@property (retain, nonatomic) NSString *bizSubId;
@property (retain, nonatomic) NSString *bizName;
@property (retain, nonatomic) NSString *generateContextId;
@property (retain, nonatomic) NSString *sceneNote;
@property (nonatomic) unsigned long long taskCreateTime;
@property (nonatomic) unsigned long long lastMinimizeTime;
@property (nonatomic) unsigned long long lastMaximizeTime;
@property (retain, nonatomic) NSString *miniSessionId;
@property (retain, nonatomic) NSString *aggreSessionId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;

+ (void)PBArrayAdd_generateType;
+ (void)PBArrayAdd_generateScene;
+ (void)PBArrayAdd_bizScene;
+ (void)PBArrayAdd_bizId;
+ (void)PBArrayAdd_bizSubId;
+ (void)PBArrayAdd_bizName;
+ (void)PBArrayAdd_taskCreateTime;
+ (void)PBArrayAdd_miniSessionId;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnType;

- (id)getPBPropertyTable;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)archivedWCTValue;
- (void).cxx_destruct;

@end
