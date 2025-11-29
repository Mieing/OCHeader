@class NSString;

@interface WeChat.MMDiskBizStatDayAggregations : NSObject <PBCoding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) void /* unknown type, empty encoding */ lessThan1;
@property (nonatomic, retain) void /* unknown type, empty encoding */ between1To3;
@property (nonatomic, retain) void /* unknown type, empty encoding */ between3To7;
@property (nonatomic, retain) void /* unknown type, empty encoding */ between7To15;
@property (nonatomic, retain) void /* unknown type, empty encoding */ between15To30;
@property (nonatomic, retain) void /* unknown type, empty encoding */ between30To90;
@property (nonatomic, retain) void /* unknown type, empty encoding */ between90To180;
@property (nonatomic, retain) void /* unknown type, empty encoding */ between180To360;
@property (nonatomic, retain) void /* unknown type, empty encoding */ moreThan360;
@property (nonatomic, readonly) NSString *description;

+ (void)PBArrayAdd_lessThan1;
+ (void)PBArrayAdd_between1To3;
+ (void)PBArrayAdd_between3To7;
+ (void)PBArrayAdd_between7To15;
+ (void)PBArrayAdd_between15To30;
+ (void)PBArrayAdd_between30To90;
+ (void)PBArrayAdd_between90To180;
+ (void)PBArrayAdd_between180To360;
+ (void)PBArrayAdd_moreThan360;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)aggregationForInterval:(double)a0;
- (void)add:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
