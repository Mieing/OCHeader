@class NSMutableArray;

@interface ReportObj16171 : NSObject {
    NSMutableArray *_checkVersionFinishPkgs;
    NSMutableArray *_checkVersionSuccessPkgs;
    NSMutableArray *_addDownloadKeys;
    NSMutableArray *_startDownloadKeys;
    NSMutableArray *_finshDownloadKeys;
    NSMutableArray *_downloadSuccessKeys;
    BOOL _allCheckFinished;
    BOOL _allDownloadFinished;
    unsigned int _totalBytes;
}

@property (retain, nonatomic) id pkgList;

+ (id)objWithPkgList:(id)a0;

- (void)notifyPreCheckVersionFinish:(id)a0;
- (void)notifyCheckVersionFinishedForPkgId:(id)a0;
- (void)notifyPostCheckVersionFinish:(id)a0;
- (void)notifyCheckVersionSuccessForPkgId:(id)a0;
- (void)notifyAddDownloadListForUrl:(id)a0 withPkgId:(id)a1;
- (void)notifyStartDownloadUrl:(id)a0 forPkgId:(id)a1;
- (void)notifyFinishDownloadUrl:(id)a0 forPkgId:(id)a1;
- (void)notifyDownloadSucceedUrl:(id)a0 forPkgId:(id)a1;
- (void)notifyDownloadBytes:(unsigned int)a0 forUrl:(id)a1 withPkgId:(id)a2;
- (BOOL)addObject:(id)a0 To:(id *)a1 byCheck:(id)a2 containsIn:(id)a3;
- (void)clear;
- (void)sendReport;
- (void).cxx_destruct;

@end
