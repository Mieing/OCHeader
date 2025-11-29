@class NSString;

@interface ReportInfo : NSObject <PBCoding>

@property (nonatomic) unsigned int m_uiSeq;
@property (nonatomic) unsigned long long m_lastSyncTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_m_uiSeq;
+ (void)PBArrayAdd_m_lastSyncTime;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;

@end
