@class MMKV;

@interface AWEPSLGameBannerCellController : AWEPadListReusableViewBaseController

@property (retain, nonatomic) MMKV *mmkv;
@property (nonatomic) BOOL displayTimeStampRecorded;
@property (nonatomic) BOOL hasShow;

- (void)viewDidDisplay;
- (void)configView:(id)a0;
- (BOOL)isViewAvailable;
- (void).cxx_destruct;
- (Class)viewClass;
- (void)didSelectItemAtIndex:(long long)a0;

@end
