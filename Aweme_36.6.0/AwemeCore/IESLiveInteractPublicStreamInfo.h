@class NSString, IESLiveMCUContent;

@interface IESLiveInteractPublicStreamInfo : NSObject {
    int _retryCount;
}

@property (nonatomic) int state;
@property (readonly, nonatomic) double timeStamp;
@property (readonly, nonatomic) IESLiveMCUContent *mcuContent;
@property (readonly, nonatomic) NSString *publicStreamId;
@property (readonly, nonatomic) unsigned long long publicStreamType;

- (id)rivalsStreamId;
- (id)initWithMcuContent:(id)a0;
- (void)recordRetryPull;
- (BOOL)shouldRetryPull;
- (void).cxx_destruct;

@end
