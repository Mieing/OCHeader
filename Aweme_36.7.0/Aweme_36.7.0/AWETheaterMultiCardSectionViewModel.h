@class AWETheaterCardDescriptionModel;

@interface AWETheaterMultiCardSectionViewModel : AWEBaseListSectionViewModel

@property (retain, nonatomic) AWETheaterCardDescriptionModel *cardDescription;

- (void)fetchSectionData;
- (void)loadMoreSectionData;
- (void).cxx_destruct;

@end
