@class AWETheaterCardUIConfigModel;

@interface AWETheaterLynxSectionViewModel : AWEBaseListSectionViewModel

@property (retain, nonatomic) AWETheaterCardUIConfigModel *cardUIConfig;

- (void)fetchSectionData;
- (void)loadMoreSectionData;
- (void).cxx_destruct;

@end
