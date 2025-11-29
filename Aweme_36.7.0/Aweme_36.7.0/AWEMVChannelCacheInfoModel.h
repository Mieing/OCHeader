@class NSArray, NSString, NSSet;

@interface AWEMVChannelCacheInfoModel : NSObject <NSCoding>

@property (copy, nonatomic) NSArray *awemeJsonList;
@property (copy, nonatomic) NSString *cacheItemIds;
@property (nonatomic) unsigned long long cacheType;
@property (nonatomic) unsigned long long cacheRequestType;
@property (nonatomic) long long cacheCount;
@property (nonatomic) double cacheTime;
@property (nonatomic) double writeDuration;
@property (nonatomic) double readDuration;
@property (nonatomic) double modelizationDuration;
@property (nonatomic) unsigned long long cacheDataFormat;
@property (nonatomic) long long updateCount;
@property (nonatomic) BOOL isExpired;
@property (nonatomic) BOOL isUsed;
@property (nonatomic) BOOL isValid;
@property (copy, nonatomic) NSSet *itemIdSet;
@property (nonatomic) BOOL videoPreloadFinish;
@property (nonatomic) BOOL hasLargeCard;
@property (copy, nonatomic) NSString *largeCardItemId;
@property (nonatomic) BOOL didSyncStoreCoverImages;
@property (copy, nonatomic) NSString *cacheStorageKey;

- (void)updateCacheItemIds:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
