@class NSString;

@interface MMAudioMonitorConfig : NSObject <PBCoding>

@property (nonatomic) BOOL enabled;
@property (nonatomic) unsigned int checkTime;
@property (nonatomic) unsigned int checkCount;
@property (nonatomic) unsigned int reportLimit;
@property (nonatomic) unsigned int reportCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_enabled;
+ (void)PBArrayAdd_checkTime;
+ (void)PBArrayAdd_reportLimit;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (void)updateWithXLabConfig:(id)a0;

@end
