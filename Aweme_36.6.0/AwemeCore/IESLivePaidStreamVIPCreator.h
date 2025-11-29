@protocol IESLivePaidStreamProvider;

@interface IESLivePaidStreamVIPCreator : IESLivePaidStreamCreator

@property (retain, nonatomic) id<IESLivePaidStreamProvider> paidStream;

+ (BOOL)creatorShouldActive:(id)a0;

- (id)extraTrackParams;
- (void)handlePaidLiveDataMessage:(id)a0;
- (long long)paidScene;
- (void)paidStreamCreate:(unsigned long long)a0 paidObject:(id)a1;
- (id)currentPaidStream;
- (void)paidStreamUnmount;
- (id)watchMemberLiveStatusForPaidStream:(id)a0;
- (void).cxx_destruct;

@end
