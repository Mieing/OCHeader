@class NSString;

@interface WCFinderTipsShowTabExtInfo : NSObject <PBCoding>

@property (copy, nonatomic) NSString *reportExtInfo;
@property (copy, nonatomic) NSString *tipsUuid;
@property (nonatomic) unsigned int jumpPriority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_jumpPriority;
+ (void)PBArrayAdd_tipsUuid;
+ (void)PBArrayAdd_reportExtInfo;
+ (void)initialize;
+ (id)extInfoWith:(id)a0 tipsUuid:(id)a1;

- (id)getPBPropertyTable;
- (id)redDotReportExtInfoByCtrlExtInfo:(id)a0;
- (void).cxx_destruct;

@end
