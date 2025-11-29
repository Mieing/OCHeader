@class NSString, NSDictionary, NSMutableDictionary, NSMutableArray;

@interface WALocalSearchMgr : NSObject <FTSTopHitDelegate> {
    NSMutableArray *_arrWeApp;
    NSMutableArray *_arrMainResult;
    NSMutableDictionary *_dicMainSearchTip;
    NSMutableArray *_arrDetailResult;
    NSMutableDictionary *_dicDetailSearchTip;
}

@property (nonatomic) BOOL bSceneForFTS;
@property (retain, nonatomic) NSString *newestQueryText;
@property (retain, nonatomic) NSString *newestQueryTextForDetail;
@property (retain, nonatomic) NSString *lastQueryText;
@property (retain, nonatomic) NSString *lastQueryTextForDetail;
@property (retain, nonatomic) NSDictionary *dicWeApp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)doInitWorker;
- (void)cancelSearch;
- (void)cancelSearchForDetail;
- (void)asyncSearch:(id)a0;
- (void)asyncSearchForDetail:(id)a0;
- (id)getArrMainSearchResult;
- (id)getMainSearchMatchTip;
- (id)getArrDetailSearchResult;
- (id)getDetailSearchMatchTip;
- (BOOL)hasSearchResultForHomePage:(id)a0;
- (BOOL)hasSearchDoneForHomePage:(id)a0;
- (BOOL)hasSearchDoneForDetailPage:(id)a0;
- (id)getMatchTipForKey:(id)a0;
- (id)getDetailMatchTipForKey:(id)a0;
- (void)initSource;
- (void)refreshSource:(id)a0;
- (void)doSearch:(id)a0;
- (void)filterTopHit:(id)a0;
- (void)doSearchForDetail:(id)a0;
- (void)fillDictioanry;
- (BOOL)isToHitWeAppReady;
- (id)tophit_getWeAppDictionary;
- (void).cxx_destruct;

@end
