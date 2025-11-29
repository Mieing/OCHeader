@class NSData;

@interface MJAsyncTaskResponseInfo : NSObject

@property (readonly, nonatomic) unsigned long long queryIntervalMillis;
@property (readonly, nonatomic) NSData *contextBuff;

+ (id)infoWithQueryIntervalMillis:(unsigned long long)a0 contextBuff:(id)a1;

- (id)initWithQueryIntervalMillis:(unsigned long long)a0 contextBuff:(id)a1;
- (void).cxx_destruct;

@end
