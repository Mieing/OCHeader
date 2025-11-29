@class NSString;

@interface WXGLogMonitor : NSObject

@property (copy, nonatomic) NSString *lastDate;

+ (id)sharedMonitor;

- (void)monitorLogSize;
- (void).cxx_destruct;

@end
