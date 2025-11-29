@interface AWEMRBadgeConsistencyModel : NSObject

@property (nonatomic) BOOL hasLoadAll;
@property (nonatomic) long long fetchedUnreadCount;

+ (id)notReady;
+ (id)notLoadAll:(long long)a0;
+ (id)hasLoadAll:(long long)a0;

@end
