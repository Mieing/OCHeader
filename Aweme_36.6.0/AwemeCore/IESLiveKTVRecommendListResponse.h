@class NSString, NSMutableArray;

@interface IESLiveKTVRecommendListResponse : NSObject <IESLiveKTVRecommendListProtocol>

@property (copy, nonatomic) NSString *defaultTab;
@property (nonatomic) long long defaultFirstLevelTab;
@property (retain, nonatomic) NSMutableArray *tabsArray;
@property (retain, nonatomic) NSMutableArray *musiclistArray;
@property (retain, nonatomic) NSMutableArray *recentlyListArray;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long currentPage;
@property (copy, nonatomic) NSString *queryId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tabListWithTabListResponse:(id)a0;
+ (id)recommendListWithSongListResponse:(id)a0;
+ (id)recommendListWithSongList:(id)a0 hasMore:(BOOL)a1;

- (void)appendMusicListWithResponseModel:(id)a0;
- (id)copy;
- (void).cxx_destruct;

@end
