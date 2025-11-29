@class NSDictionary, NSObject;
@protocol OS_dispatch_source;

@interface DispatchSourceWrapper : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_source> *source;
@property (nonatomic) double timestamp;
@property (nonatomic) double startTimestamp;
@property (retain, nonatomic) NSDictionary *memoryData;

- (void).cxx_destruct;

@end
