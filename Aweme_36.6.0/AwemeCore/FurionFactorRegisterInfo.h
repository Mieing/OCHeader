@class NSArray, NSString;

@interface FurionFactorRegisterInfo : FurionMetaFactorRegisterInfo

@property (nonatomic) unsigned long long factorSource;
@property (nonatomic) BOOL isDumpDB;
@property (nonatomic) unsigned long long maxCacheCount;
@property (retain, nonatomic) NSArray *subFactors;
@property (nonatomic) unsigned long long divideTime;
@property (retain, nonatomic) NSString *startSessionEvent;
@property (retain, nonatomic) NSString *endSessionEvent;

- (void).cxx_destruct;

@end
