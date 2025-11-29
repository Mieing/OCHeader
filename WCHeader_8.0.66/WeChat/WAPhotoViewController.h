@class NSString, NSMutableArray, NSMutableDictionary;

@interface WAPhotoViewController : PhotoViewController <WAImageScrollViewDelegate> {
    NSMutableArray *m_arrayThumbImageUrl;
    NSMutableDictionary *m_dicImageUrlDownloadState;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)setThumbImageArray:(id)a0;
- (id)viewAtPage:(unsigned int)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)imageDataAtPage:(unsigned int)a0;
- (id)getWAImageScrollViewAtIndex:(unsigned int)a0;
- (id)getPhotoatIndex:(unsigned int)a0;
- (void)onViewHDImage:(id)a0;
- (void)OnHttpGetFinish:(id)a0 response:(id)a1 ErrNo:(int)a2 isWebp:(BOOL)a3;
- (unsigned long long)getIndexArrayImageUrlCacheKey:(id)a0;
- (long long)getImageDownloadStateForPageIndex:(unsigned int)a0;
- (void)onChangePage;
- (void).cxx_destruct;

@end
