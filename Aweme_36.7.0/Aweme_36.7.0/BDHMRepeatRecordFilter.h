@class BDHMRepeatCacheInfo;
@protocol BDHMRepeatRecordFilterDelegate;

@interface BDHMRepeatRecordFilter : NSObject

@property (weak, nonatomic) id<BDHMRepeatRecordFilterDelegate> delegate;
@property (retain) BDHMRepeatCacheInfo *lastInfo;

+ (id)eventKeyParams:(id)a0;
+ (BOOL)isEqualRecordValue:(id)a0 diffValue:(id)a1;
+ (BOOL)isEqualRecordDict:(id)a0 diffDict:(id)a1;

- (BOOL)isRepeatWithNewRecord:(id)a0 eventName:(id)a1 diif:(id /* block */)a2;
- (void)dealReapeatDataWithIsRepeat:(BOOL)a0 record:(id)a1 event:(id)a2;
- (BOOL)isRepeatWithNewRecord:(id)a0 eventName:(id)a1;
- (void)dumpAllCachedData;
- (void).cxx_destruct;

@end
