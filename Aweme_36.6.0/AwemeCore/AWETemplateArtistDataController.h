@class NSMutableArray, NSString, NSArray, NSDictionary, NSIndexPath, AFDInspirationTabItem;

@interface AWETemplateArtistDataController : AWEListDataController <AWETemplateArtistTemplateModelProtocol, AWETemplateArtistTemplateModelManageProtocol>

@property (copy, nonatomic) NSString *userID;
@property (nonatomic) long long cursor;
@property (nonatomic) long long count;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSArray *items;
@property (readonly, nonatomic) BOOL hasMore;
@property (readonly, nonatomic) NSIndexPath *currentIndexPath;
@property (nonatomic) long long playingIndex;
@property (nonatomic) long long enterDetailIndex;
@property (readonly, nonatomic) AFDInspirationTabItem *currentItem;
@property (nonatomic) BOOL isFromMusicDetail;
@property (retain, nonatomic) NSDictionary *musicDetailTrackParams;
@property (retain, nonatomic) NSMutableArray *dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)requestTemplateID:(id)a0 originTemplateType:(long long)a1 aimTemplateType:(long long)a2 completion:(id /* block */)a3;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)preloadVideos;
- (id)initWithUserID:(id)a0 referString:(id)a1;
- (id)p_constructItemsArrayWithTemplateResponseModel:(id)a0;
- (void)preloadVideosWithCurrentIndex:(long long)a0;
- (void)preloadWithItem:(id)a0;
- (void).cxx_destruct;
- (id)requestURL;
- (void)dealloc;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
