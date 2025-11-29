@class NSOperationQueue, NSString, NSObject;
@protocol OS_dispatch_source;

@interface YYMemoryCacheManager : NSObject

@property (nonatomic) BOOL enable;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) NSString *timerNotificationName;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;

+ (void)setABEnablue:(BOOL)a0 maxThreadValue:(int)a1;
+ (id)shareInstance;

- (void).cxx_destruct;

@end
