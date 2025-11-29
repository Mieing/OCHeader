@class NSString, NSMutableArray, FTSFavDB;
@protocol FTSFavSearchTaskDelegate;

@interface FTSFavSearchTask : NSObject {
    NSMutableArray *m_resultArr;
    NSMutableArray *m_dbResultArr;
    BOOL m_isCancel;
    BOOL m_isRuning;
    FTSFavDB *m_favFTSDB;
}

@property (copy, nonatomic) NSString *taskKey;
@property (weak, nonatomic) id<FTSFavSearchTaskDelegate> delegate;
@property (retain, nonatomic) NSString *newestQueryText;
@property (retain, nonatomic) NSString *lastQueryText;
@property (readonly, nonatomic) NSMutableArray *arrLastQueryTerm;
@property (nonatomic) BOOL hasSearchDone;

- (id)initWithDB:(id)a0;
- (void)dealloc;
- (void)asyncFTSSearch:(id)a0 byType:(long long)a1 tags:(id)a2;
- (void)syncFTSSearch:(id)a0 byType:(long long)a1 tags:(id)a2;
- (void)loadMoreSearchContent;
- (id)loadMoreSearchContentFromDBResult:(int)a0 deletedItemCount:(int *)a1;
- (void)cancelSearch;
- (unsigned int)getCurrentResultCount;
- (unsigned int)getTotalResultCount;
- (id)getItemAtIndex:(unsigned int)a0;
- (id)getAllResultItem;
- (id)peekAllResultItemIncludingUnloaded;
- (void).cxx_destruct;

@end
