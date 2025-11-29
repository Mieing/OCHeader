@class NSArray;

@interface IESLiveKTVOrderPanelSongListSectionModel : IESLiveKTVOrderPanelBaseSectionModel

@property (copy, nonatomic) NSArray *classArray;
@property (nonatomic) double minimumLineSpacing;
@property (nonatomic) double minimumInteritemSpacing;
@property (nonatomic) long long scrollDirection;
@property (nonatomic) long long selectedIndex;
@property (nonatomic) BOOL scrollEnable;
@property (nonatomic) BOOL noNeedToFetch;

- (void)refreshModelWithFatherModel:(id)a0;
- (void)fetchTabArrayWithCompletion:(id /* block */)a0;
- (id)getClassWithCategory:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)sectionType;
- (Class)sectionClass;

@end
