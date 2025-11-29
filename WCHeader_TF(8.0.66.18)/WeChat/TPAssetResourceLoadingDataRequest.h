@class NSString, TPWorkerQueue, NSRecursiveLock;
@protocol TPAssetResourceLoadingDataRequestDelegate;

@interface TPAssetResourceLoadingDataRequest : NSObject

@property (retain, nonatomic) NSRecursiveLock *recursiveLock;
@property (retain, nonatomic) NSString *nsDataWritePath;
@property (retain, nonatomic) NSString *fileName;
@property (nonatomic) unsigned long long fileLen;
@property (nonatomic) int requestNum;
@property (nonatomic) int taskId;
@property (nonatomic) long long currentOffset;
@property (nonatomic) long long realOffset;
@property (retain, nonatomic) TPWorkerQueue *dataWriteQueue;
@property (weak, nonatomic) id<TPAssetResourceLoadingDataRequestDelegate> delegate;
@property (readonly, nonatomic) long long requestedOffset;
@property (readonly, nonatomic) long long requestedLength;
@property (readonly, nonatomic) BOOL requestsAllDataToEndOfResource;

- (id)initWithOffset:(long long)a0 length:(long long)a1 endOfResource:(BOOL)a2;
- (void)setDataWritePath:(id)a0;
- (void)setDataRequestNum:(int)a0;
- (id)getFileName;
- (void)setDataRequestDelegate:(id)a0;
- (void)setRequestedLength:(long long)a0;
- (void)respondWithData:(id)a0;
- (void)notifyDataReady:(long long)a0 length:(unsigned long long)a1;
- (id)description;
- (void)setFileName:(id)a0;
- (void)setTaskId:(int)a0;
- (void)setDataWriteQueue:(id)a0;
- (void).cxx_destruct;

@end
