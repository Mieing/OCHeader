@class NSDictionary, NSString;

@interface MMExptItem : MMObject <PBCoding>

@property (nonatomic) unsigned int exptId;
@property (nonatomic) unsigned int groupId;
@property (nonatomic) unsigned int exptSeq;
@property (nonatomic) unsigned int startTimeSec;
@property (nonatomic) unsigned int endTimeSec;
@property (retain, nonatomic) NSDictionary *exptArgs;
@property (nonatomic) unsigned int exptType;
@property (nonatomic) unsigned int subType;
@property (retain, nonatomic) NSString *exptCheckSum;
@property (nonatomic) unsigned int lastRptTimeSec;
@property (nonatomic) unsigned int fromSystem;
@property (nonatomic) unsigned long long bucketSrc;
@property (retain, nonatomic) NSString *paramHashVal;
@property (nonatomic) unsigned int useFlag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_exptId;
+ (void)PBArrayAdd_groupId;
+ (void)PBArrayAdd_exptSeq;
+ (void)PBArrayAdd_startTimeSec;
+ (void)PBArrayAdd_endTimeSec;
+ (void)PBArrayAdd_exptArgs;
+ (void)PBArrayAdd_exptType;
+ (void)PBArrayAdd_subType;
+ (void)PBArrayAdd_exptCheckSum;
+ (void)PBArrayAdd_fromSystem;
+ (void)PBArrayAdd_bucketSrc;
+ (void)PBArrayAdd_paramHashVal;
+ (void)PBArrayAdd_useFlag;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (BOOL)isReady;
- (BOOL)checkTypeToReport;
- (BOOL)needReport;
- (BOOL)isXLabExpt;
- (BOOL)isSessionConfig;
- (BOOL)isSessionUBAConfig;
- (BOOL)isSessionPageConfig;
- (BOOL)isSessionViewBlackListConfig;
- (BOOL)isSessionEdgeComputingScriptConfig;
- (BOOL)isSessionEdgeComputingSqlConfig;
- (BOOL)isNewEdgeComputingScriptConfig;
- (BOOL)isNewEdgeComputingSqlConfig;
- (id)toSessionConfig;
- (BOOL)needRptSessionDetail;
- (unsigned int)checkSessionPageId;
- (BOOL)parseJson:(id)a0;
- (id)decompressJson:(id)a0;
- (unsigned int)decodeReferenceInt:(id)a0 andWidth:(unsigned int)a1;
- (unsigned int)decodeReferenceLength:(id)a0;
- (BOOL)isFromApp;
- (BOOL)isUseExptAppByUseFlag;
- (void).cxx_destruct;

@end
