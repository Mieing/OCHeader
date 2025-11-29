@class AWELandscapeRelatedDataController, AWEAwemeModel;

@interface AWELandscapeDetailRelatedVideoSectionViewModel : AWEBaseListSectionViewModel

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWELandscapeRelatedDataController *dataController;

- (void)fetchSectionData;
- (void)loadMoreSectionData;
- (void).cxx_destruct;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
