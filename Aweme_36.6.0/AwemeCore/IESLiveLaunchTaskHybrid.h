@protocol IESLiveGeckoFileLoader;

@interface IESLiveLaunchTaskHybrid : IESLiveBaseLaunchTask

@property (retain, nonatomic) id<IESLiveGeckoFileLoader> fileLoader;
@property (nonatomic) long long excuteCnt;

- (void)fetchResourceWithCompletion:(id /* block */)a0;
- (id)prefetchDataForPath:(id)a0 geckoKey:(id)a1 channel:(id)a2;
- (void)excute;
- (void).cxx_destruct;

@end
