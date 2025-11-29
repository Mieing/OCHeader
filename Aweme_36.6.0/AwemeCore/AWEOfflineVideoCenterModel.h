@class NSLock, NSMutableArray;

@interface AWEOfflineVideoCenterModel : NSObject <NSCoding>

@property (retain, nonatomic) NSLock *lock;
@property (retain, nonatomic) NSLock *cellLock;
@property (retain, nonatomic) NSMutableArray *downloadingModels;
@property (retain, nonatomic) NSMutableArray *downloadedModels;

- (void)addDownloadModel:(id)a0;
- (void)mergeGroupModelIfNeededWithSingleResourceModels:(id)a0;
- (id)transferToCellModels;
- (void)deleteDownloadedResourceModel:(id)a0;
- (void)deleteInvalidVideoWithItemIDs:(id)a0;
- (void)deleteDownloadingResourceModel:(id)a0;
- (void)clearAllDownloading;
- (id)allDownloadingModels;
- (double)cacheSizeByte;
- (BOOL)mergeMixGroupIfNeededWithModel:(id)a0;
- (BOOL)mergeAuthorGroupIfNeededWithModel:(id)a0;
- (id)allDownloadedAwemeModels;
- (BOOL)cantainsModel:(id)a0;
- (id)allDownloadAwemeModels;
- (long long)downloadedMixCount;
- (long long)downloadedAuthorCount;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (void)clear;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
