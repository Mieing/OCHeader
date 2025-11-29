@protocol InternalTransferTaskDelegate;

@interface InternalTransferTask : NSObject

@property (weak, nonatomic) id<InternalTransferTaskDelegate> m_delegate;

- (void)startTask;
- (void).cxx_destruct;

@end
