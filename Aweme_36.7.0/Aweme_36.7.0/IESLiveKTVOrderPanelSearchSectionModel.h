@class NSString, IESLiveKTVSearchApi, SearchSongResponse_ResponseData, IESLiveListViewSection;

@interface IESLiveKTVOrderPanelSearchSectionModel : IESLiveKTVOrderPanelBaseSectionModel

@property (retain, nonatomic) IESLiveListViewSection *searchSection;
@property (retain, nonatomic) IESLiveKTVSearchApi *api;
@property (retain, nonatomic) SearchSongResponse_ResponseData *searchListModel;
@property (nonatomic) BOOL isAnchor;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *requestPage;
@property (nonatomic) long long searchType;
@property (copy, nonatomic) id /* block */ transformItems;
@property (nonatomic) long long viewStyle;
@property (copy, nonatomic) id /* block */ exitSearchModeBlock;
@property (nonatomic) double searchGap;
@property (nonatomic) double searchTop;
@property (nonatomic) double searchHeight;
@property (copy, nonatomic) NSString *requiredSongInfo;

- (void)refreshModelWithFatherModel:(id)a0;
- (void)searchMusicWithKeyWord:(id)a0 querySource:(int)a1 completion:(id /* block */)a2;
- (void)clearSearchData;
- (void).cxx_destruct;
- (unsigned long long)sectionType;
- (id)init;
- (Class)sectionClass;

@end
