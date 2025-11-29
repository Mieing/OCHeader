@class NSString, NSDictionary, NSDate;

@interface AWENetworkCacheItem : NSObject <AWENetworkCacheItemType>

@property (copy, nonatomic) NSString *key;
@property (nonatomic) unsigned long long fetchStrategy;
@property (nonatomic) unsigned long long expiredStrategy;
@property (nonatomic) unsigned long long storeStrategy;
@property (nonatomic) long long expiredCount;
@property (nonatomic) double timeout;
@property (retain, nonatomic) NSDictionary *additionalInfo;
@property (retain, nonatomic) NSDictionary *value;
@property (retain, nonatomic) NSDate *storeDate;
@property (nonatomic) long long fetchedCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
