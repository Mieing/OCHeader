@class BDUGLocationCacheInfo, NSString;

@interface BDUGLocationFrequentCache : NSObject

@property (retain, nonatomic) BDUGLocationCacheInfo *cacheInfo;
@property (retain, nonatomic) BDUGLocationCacheInfo *realCacheInfo;
@property (retain, nonatomic) NSString *pathCode;
@property (retain, nonatomic) NSString *pathMsg;
@property (nonatomic) double realCacheInterval;
@property (nonatomic) long long cacheAcc;
@property (nonatomic) double locTime;

- (void)setWithCacheInfo:(id)a0 realCacheInfo:(id)a1 pathCode:(id)a2 pathMsg:(id)a3 realCacheInterval:(double)a4 cacheAcc:(long long)a5 locTime:(double)a6;
- (void).cxx_destruct;

@end
