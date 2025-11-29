@class AWEECNativePrefetchProcessor;

@interface AWEECNativePrefetchProcessorReuseCache : NSObject

@property (retain, nonatomic) AWEECNativePrefetchProcessor *processor;
@property (nonatomic) double requestTime;
@property (nonatomic) double expireTime;

- (id)initWithProcessor:(id)a0;
- (unsigned long long)compareTargetProcessor:(id)a0;
- (void).cxx_destruct;
- (BOOL)isExpired;

@end
