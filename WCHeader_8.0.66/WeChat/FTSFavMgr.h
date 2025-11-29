@class FTSFavIndexMgr, NSString, NSMutableDictionary, FTSFavDB;

@interface FTSFavMgr : NSObject <FTSFavSearchTaskDelegate> {
    NSMutableDictionary *_dicFavSearchTask;
    FTSFavDB *_ftsFavDB;
    FTSFavIndexMgr *_favIndexMgr;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)initIndexMgr:(id)a0;
- (id)getTaskForKey:(id)a0;
- (void)makeTaskIfNil:(id)a0;
- (void)removeTaskForKey:(id)a0;
- (id)getTaskForKey:(id)a0 queryText:(id)a1;
- (void)setNewestQuery:(id)a0 taskKey:(id)a1;
- (id)getNewestQuery:(id)a0;
- (id)getArrLastQuerywords:(id)a0;
- (id)getLastQueryText:(id)a0;
- (void)asyncSearch:(id)a0 byType:(long long)a1 andTags:(id)a2 taskKey:(id)a3;
- (void)syncSearch:(id)a0 byType:(long long)a1 andTags:(id)a2 taskKey:(id)a3;
- (void)searchMoreForTask:(id)a0;
- (void)cancelSearch:(id)a0;
- (BOOL)hasSearchDoneFor:(id)a0 taskKey:(id)a1;
- (BOOL)hasSearchResultFor:(id)a0 taskKey:(id)a1;
- (id)getSearchItemFor:(id)a0 index:(unsigned int)a1 taskKey:(id)a2;
- (unsigned int)getSearchItemCountFor:(id)a0 taskKey:(id)a1;
- (unsigned int)getSearchItemTotalCountFor:(id)a0 taskKey:(id)a1;
- (id)getAllSearchResultFor:(id)a0 taskKey:(id)a1;
- (id)peekAllSearchResultIncludingUnloadedFor:(id)a0 taskKey:(id)a1;
- (void)onFavSearchTaskResultChanged:(BOOL)a0 taskObj:(id)a1;
- (unsigned int)asyncGetFTSFavDBInfoWhenComplete:(id /* block */)a0;
- (BOOL)haveFTS5Index:(id)a0;
- (BOOL)updateOldFavTag:(id)a0 toNewFavTag:(id)a1;
- (id)getAllFavTag;
- (id)getTagsMatch:(id)a0;
- (id)getFavItemLocalIdByTag:(id)a0;
- (BOOL)updateTagIndexFor:(id)a0;
- (void).cxx_destruct;

@end
