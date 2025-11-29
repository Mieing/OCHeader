@class NSString, AWEPublishCreateModelParamContext;

@interface AWEPublishCreateModelParamClipDataProvider : NSObject <AWEPublishCreateModelParamProvider>

@property (retain, nonatomic) AWEPublishCreateModelParamContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)publishRequestParams:(id)a0 context:(id)a1;
- (BOOL)isLongLivePhotoWithRepoLivePhotoModel:(id)a0;
- (id)clipsInfoForVideo;
- (id)clipsInfoForImageAlbum;
- (id)clipDataForVideo;
- (id)clipDataForSlides;
- (id)clipDataForImageAlbum;
- (id)clipsForVideo;
- (id)clipsForImageAlbum;
- (id)durationWithContext:(id)a0;
- (id)clipsForSlides;
- (id)musicBeatsForSlides;
- (long long)imagesCoverIndex;
- (void).cxx_destruct;

@end
