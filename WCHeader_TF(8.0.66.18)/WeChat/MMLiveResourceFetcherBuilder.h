@interface MMLiveResourceFetcherBuilder : NSObject

+ (id)createDefault;
+ (id)createWithMaximumRetryCount:(unsigned long long)a0;
+ (id)createUnarchiving;
+ (id)createFanout;
+ (id)createFanoutWithMaximumRetryCount:(unsigned long long)a0;
+ (id)createRootlessWithMaximumRetryCount:(unsigned long long)a0;

@end
