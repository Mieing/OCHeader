@class NSString, NSObject;
@protocol OS_dispatch_queue, WXGRoamImportQueueDelegate;

@interface WXGRoamImportQueue : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *importQueue;
@property (copy, nonatomic) NSString *destinationFolder;
@property (weak, nonatomic) id<WXGRoamImportQueueDelegate> delegate;

+ (void)importInDestionation:(id)a0;

- (id)init;
- (void)importAll;
- (void)markImportFinish:(unsigned long long)a0;
- (void)importOneDir:(id)a0 taskId:(unsigned long long)a1;
- (void).cxx_destruct;

@end
