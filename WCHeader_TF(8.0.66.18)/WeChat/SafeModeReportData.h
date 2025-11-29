@class NSString;

@interface SafeModeReportData : NSObject <PBCoding>

@property (nonatomic) int ID;
@property (nonatomic) int key;
@property (nonatomic) int value;
@property (nonatomic) BOOL isKVReport;
@property (retain, nonatomic) NSString *ext;
@property (nonatomic) BOOL isReportNow;
@property (nonatomic) BOOL isKeyLog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_ID;
+ (void)PBArrayAdd_key;
+ (void)PBArrayAdd_value;
+ (void)PBArrayAdd_isKVReport;
+ (void)PBArrayAdd_ext;
+ (void)PBArrayAdd_isReportNow;
+ (void)PBArrayAdd_isKeyLog;
+ (void)initialize;

@end
