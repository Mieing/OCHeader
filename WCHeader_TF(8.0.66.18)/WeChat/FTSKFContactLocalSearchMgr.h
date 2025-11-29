@class NSString, NSMutableDictionary, NSDictionary, NSMutableArray;

@interface FTSKFContactLocalSearchMgr : NSObject <FTSTopHitDelegate>

@property (retain, nonatomic) NSMutableArray *m_arrKFContact;
@property (retain, nonatomic) NSMutableArray *m_arrMainResult;
@property (retain, nonatomic) NSMutableDictionary *m_dicMainSearchTip;
@property (retain, nonatomic) NSMutableArray *m_arrDetailResult;
@property (retain, nonatomic) NSMutableDictionary *m_dicDetailSearchTip;
@property (nonatomic) BOOL bSceneForFTS;
@property (retain, nonatomic) NSString *newestQueryText;
@property (retain, nonatomic) NSString *newestQueryTextForDetail;
@property (retain, nonatomic) NSString *lastQueryText;
@property (retain, nonatomic) NSString *lastQueryTextForDetail;
@property (retain, nonatomic) NSDictionary *dicKFContact;
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
- (BOOL)isToHitKFContactReady;
- (id)tophit_getKFContactDictionary;
- (void).cxx_destruct;

@end
