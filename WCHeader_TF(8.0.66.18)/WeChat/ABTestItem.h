@class NSString, NSDictionary;

@interface ABTestItem : MMObject <PBCoding>

@property (retain, nonatomic) NSString *nsLayerId;
@property (retain, nonatomic) NSString *nsExpId;
@property (retain, nonatomic) NSDictionary *dicExpArgs;
@property (nonatomic) unsigned int uiSeq;
@property (nonatomic) unsigned int uiBeginTime;
@property (nonatomic) unsigned int uiEndTime;
@property (nonatomic) BOOL bNoReport;
@property (retain, nonatomic) NSString *nsBizId;
@property (nonatomic) unsigned int uiPriorityLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_nsLayerId;
+ (void)PBArrayAdd_nsExpId;
+ (void)PBArrayAdd_dicExpArgs;
+ (void)PBArrayAdd_uiSeq;
+ (void)PBArrayAdd_uiBeginTime;
+ (void)PBArrayAdd_uiEndTime;
+ (void)PBArrayAdd_bNoReport;
+ (void)PBArrayAdd_nsBizId;
+ (void)PBArrayAdd_uiPriorityLevel;
+ (void)initialize;

@end
