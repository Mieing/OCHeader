@class NSString, NSMutableArray;
@protocol WCFinderRedDotExposeModelDelegate;

@interface WCFinderRedDotExposeModel : NSObject <PBCoding>

@property (weak, nonatomic) id<WCFinderRedDotExposeModelDelegate> delegate;
@property (copy, nonatomic) NSString *path;
@property (nonatomic) unsigned long long businessType;
@property (retain, nonatomic) NSMutableArray *exposeTimeStampArray;
@property (retain, nonatomic) NSMutableArray *banTimeStampArray;
@property (nonatomic) long long accRedDotExpStartTime;
@property (nonatomic) BOOL isBanAsUseBusiness;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_path;
+ (void)PBArrayAdd_exposeTimeStampArray;
+ (void)PBArrayAdd_banTimeStampArray;
+ (void)PBArrayAdd_businessType;
+ (void)PBArrayAdd_accRedDotExpStartTime;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)initWithRedDotPath:(id)a0 businessType:(unsigned long long)a1;
- (id)getTargetKey;
- (long long)exposeCount;
- (long long)banCount;
- (void)increaseExposeCount;
- (void)increaseBanCount;
- (void)removeBanCountArray;
- (void)resetBanCalacCount;
- (void)resetCalacCountAtReason:(long long)a0;
- (void).cxx_destruct;

@end
