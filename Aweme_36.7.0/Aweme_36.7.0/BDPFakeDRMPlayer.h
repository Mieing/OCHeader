@class BDPFakeDRMResourceLoaderDelegate, NSObject, UIView;
@protocol OS_dispatch_queue;

@interface BDPFakeDRMPlayer : NSObject

@property (retain, nonatomic) BDPFakeDRMResourceLoaderDelegate *resourceLoader;
@property (weak, nonatomic) UIView *contentView;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic) BOOL screenRecordEnable;

- (void)playWithURLString:(id)a0;
- (void)enableUserScreenRecord;
- (void)disableUserScreenRecord;
- (void).cxx_destruct;
- (id)init;

@end
