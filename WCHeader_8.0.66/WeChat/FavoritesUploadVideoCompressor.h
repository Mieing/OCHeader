@class NSString, NSMutableSet;

@interface FavoritesUploadVideoCompressor : FavoritesUploadBaseProccessor <FavVideoCompressExt> {
    NSMutableSet *m_currentItemCompressingVideoSet;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (void)addItem:(id)a0 isPrior:(BOOL)a1;
- (void)removeItem:(id)a0;
- (void)tryProccess;
- (void)onCompressItem:(id)a0 isSuccess:(BOOL)a1;
- (void)configFavData:(id)a0 withCompressPath:(id)a1;
- (void)findNeedCompressVideosInDataList:(id)a0;
- (void)configCompressedVideosInDataList:(id)a0;
- (void)onFavVideoCompressFinish:(id)a0 isSuccess:(BOOL)a1;
- (void).cxx_destruct;

@end
