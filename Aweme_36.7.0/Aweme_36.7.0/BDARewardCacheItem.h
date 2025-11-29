@class BDARewardDataItem, NSDate;

@interface BDARewardCacheItem : NSObject

@property (retain, nonatomic) BDARewardDataItem *data;
@property (retain, nonatomic) NSDate *expirationDate;

- (void).cxx_destruct;

@end
