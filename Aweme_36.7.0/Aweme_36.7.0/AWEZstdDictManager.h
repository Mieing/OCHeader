@class NSObject;
@protocol OS_dispatch_queue;

@interface AWEZstdDictManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *process_serial_queue;

+ (id)shareInstance;

- (void)setupTTNetZstdImpl;
- (void)p_setupTTNetZstdImpl;
- (void).cxx_destruct;
- (id)init;

@end
