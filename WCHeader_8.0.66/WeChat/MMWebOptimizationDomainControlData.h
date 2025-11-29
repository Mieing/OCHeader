@class NSString;

@interface MMWebOptimizationDomainControlData : MMObject <PBCoding>

@property (nonatomic) unsigned int controlExpiredTime;
@property (nonatomic) unsigned int controlBits;
@property (copy, nonatomic) NSString *domain;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_controlExpiredTime;
+ (void)PBArrayAdd_controlBits;
+ (void)PBArrayAdd_domain;
+ (void)initialize;

- (id)getPBPropertyTable;
- (BOOL)isInA8keyLiteReqBlockingControl;
- (void).cxx_destruct;

@end
