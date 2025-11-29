@class NSString, NSMutableDictionary;

@interface FTSTopHitValue : NSObject <PBCoding>

@property (retain, nonatomic) NSString *key;
@property (nonatomic) unsigned int clickScore;
@property (nonatomic) unsigned int timestamp;
@property (retain, nonatomic) NSMutableDictionary *dicGroupMember;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_key;
+ (void)PBArrayAdd_clickScore;
+ (void)PBArrayAdd_timestamp;
+ (void)PBArrayAdd_dicGroupMember;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (BOOL)isValid;
- (void)addScore;
- (void)addScore:(int)a0;
- (void)minusScore;
- (void)minusScore:(int)a0;
- (long long)compareTopHitValueAscending:(id)a0;
- (BOOL)isOutOfDate;
- (BOOL)isDisplayAvailable;
- (BOOL)isDisplayAvailable:(int)a0;
- (unsigned int)getABTestValidDays;
- (unsigned int)getABTestThredshold;
- (void).cxx_destruct;

@end
