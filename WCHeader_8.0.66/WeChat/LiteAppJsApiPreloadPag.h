@class MMLiteAppDownloadMgr, NSString;

@interface LiteAppJsApiPreloadPag : LiteAppJsApi <MMLiteAppDownloadMgrDelegate>

@property (retain, nonatomic) MMLiteAppDownloadMgr *downloadMgr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
