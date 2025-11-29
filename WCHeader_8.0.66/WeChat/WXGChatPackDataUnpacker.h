@class NSString, NSObject;
@protocol OS_dispatch_queue, WXGChatPackDataUnpackerDelegate;

@interface WXGChatPackDataUnpacker : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *unpackQueue;
@property BOOL bUnpacking;
@property (copy, nonatomic) NSString *unpackDestination;
@property (weak, nonatomic) id<WXGChatPackDataUnpackerDelegate> delegate;
@property (nonatomic) BOOL bDataIsZip;

- (id)init;
- (void)mainThreadCallDelegate:(BOOL)a0;
- (void)mainThreadSyncProgress:(float)a0;
- (void)stopUnpack;
- (void)startUnpackData:(id)a0;
- (BOOL)p_importMsgFromFolder:(id)a0;
- (void).cxx_destruct;

@end
