@class NSObject;
@protocol AWEAdLongVideoBannerManager;

@interface AWERVLVAdBannerElement : AWERVVideoInfoBaseElement

@property (retain, nonatomic) NSObject<AWEAdLongVideoBannerManager> *preAdBannerManager;
@property (retain, nonatomic) NSObject<AWEAdLongVideoBannerManager> *currentAdBannerManager;

- (id)createAdBannerManager;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)viewDidLoad;
- (void)resetUI;

@end
