@class OrderedDictionary, NSMutableArray;

@interface EmoticonManageDataLogic : NSObject

@property (retain, nonatomic) OrderedDictionary *pageDict;
@property (retain, nonatomic) NSMutableArray *existLocalPackageArray;
@property (nonatomic) BOOL hasUnDownload;
@property (retain, nonatomic) OrderedDictionary *tmpDict;

- (id)init;
- (void)loadDataFromDB;
- (id)getManageDataList;
- (id)dataObjAtIndex:(unsigned long long)a0;
- (void)reloadAllData;
- (id)reloadDataFor:(id)a0;
- (BOOL)hasUnDownloadPacks;
- (unsigned long long)getPackageCount;
- (unsigned long long)getManageObjCount;
- (BOOL)isUnDownloadAt:(unsigned long long)a0;
- (unsigned long long)downloadedCount;
- (id)unDownloadIndexPathsForSection:(unsigned long long)a0;
- (id)commitEdit;
- (void)moveObjFrom:(unsigned long long)a0 To:(unsigned long long)a1;
- (void)moveObjInsideSet:(id)a0 from:(unsigned long long)a1 to:(unsigned long long)a2;
- (void)moveAllAbsIndexFrom:(unsigned long long)a0 to:(unsigned long long)a1 offset:(unsigned long long)a2 isUp:(BOOL)a3;
- (void).cxx_destruct;

@end
