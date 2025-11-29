@class NSArray, AWELongVideoAdPageContext, NSError;
@protocol AWEHttpTask;

@interface AWEAdLongVideoContainerViewModel : NSObject

@property (retain, nonatomic) AWELongVideoAdPageContext *pageContext;
@property (retain, nonatomic) NSArray *videoInfos;
@property (nonatomic) double allAdVideoDisplayDuration;
@property (nonatomic) double skipAdSeconds;
@property (retain, nonatomic) id<AWEHttpTask> httpTask;
@property (retain, nonatomic) NSError *netWorkError;

- (void)startFetchLongVideoAdBannerData:(id /* block */)a0;
- (void)refreshViewModelWithPageContext:(id)a0;
- (void)startFetchLongVideoAdData;
- (double)adLongVideoRequestTimoutLimit;
- (id)longVideoBaseURL;
- (long long)adVideoDurationLimit;
- (void)trackBannerRequestEndEvent:(BOOL)a0 reason:(id)a1;
- (void).cxx_destruct;

@end
