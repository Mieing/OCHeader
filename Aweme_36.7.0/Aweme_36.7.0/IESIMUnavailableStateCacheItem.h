@class NSString;

@interface IESIMUnavailableStateCacheItem : NSObject

@property (readonly, copy, nonatomic) NSString *itemId;
@property (readonly, nonatomic) BOOL isUnavailable;
@property (readonly, nonatomic) long long unavailableReason;
@property (nonatomic) double unavailableUpdateTimestamp;
@property (readonly, nonatomic) unsigned long long fromAPI;

+ (long long)unavailableStateExpiredInterval;

- (BOOL)isValidFeed;
- (id)initWithItemId:(id)a0;
- (void)updateFromAPI:(unsigned long long)a0;
- (void)updateIsUnavailable:(BOOL)a0 source:(id)a1;
- (void)updateUnavailableUpdateTimestamp:(double)a0 source:(id)a1;
- (void)updateUnavailableReason:(long long)a0 source:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
