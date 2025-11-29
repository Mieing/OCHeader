@class NSString, PHLivePhotoView, AVURLAsset, MediaDecrypter, NSMutableDictionary;
@protocol IESIMAssetLoaderProtocol;

@interface AWEIMAwemeMediaDisplayViewController_LivePhoto : AWEIMAwemeMediaDisplayViewController_Image <UIGestureRecognizerDelegate, PHLivePhotoViewDelegate>

@property (retain, nonatomic) PHLivePhotoView *livePhotoView;
@property (nonatomic) BOOL needFetchVideo;
@property (retain, nonatomic) NSString *imagePath;
@property (retain, nonatomic) AVURLAsset *videoAsset;
@property (retain, nonatomic) MediaDecrypter *decrypter;
@property (retain, nonatomic) id<IESIMAssetLoaderProtocol> loader;
@property (retain, nonatomic) NSMutableDictionary *trackMap;
@property (nonatomic) BOOL hadAssembled;
@property (nonatomic) double startTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setAwemeModel:(id)a0;
- (void)onPressDownLoad;
- (void)didFinishDownloadImageWithLocalPath:(id)a0 image:(id)a1;
- (BOOL)p_parseLocalPairedResourceAndPlay:(id)a0;
- (void)p_parseVideoLocalFilePath:(id)a0;
- (void)p_fetchVideoResourceIfNeeded:(id)a0;
- (void)p_playLocalResourceForEmptyTosKey:(id)a0;
- (void)p_saveAsLivePhoto:(id)a0 videoPath:(id)a1 completion:(id /* block */)a2;
- (void)p_play:(id)a0 imagePath:(id)a1;
- (id)p_localSenderVideoPath:(id)a0;
- (id)p_senderLocalAssetWithSuffix:(id)a0;
- (id)p_senderLocalAsset:(id)a0;
- (void)p_decryptVideoAndPlay:(id)a0;
- (id)p_localAssetWithSuffix:(id)a0;
- (id)p_fileWithSuffixCanPlay:(id)a0 withPrefix:(id)a1;
- (void)p_trackLivePhotoPlay:(BOOL)a0 error:(id)a1;
- (void)p_updateDBModel:(int)a0 path:(id)a1 size:(double)a2;
- (void)p_autoStopPlayer:(double)a0;
- (void)p_assembleLivePhoto;
- (void)livePhotoView:(id)a0 didEndPlaybackWithStyle:(long long)a1;
- (void)livePhotoView:(id)a0 willBeginPlaybackWithStyle:(long long)a1;
- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setCurrentImage:(id)a0;

@end
