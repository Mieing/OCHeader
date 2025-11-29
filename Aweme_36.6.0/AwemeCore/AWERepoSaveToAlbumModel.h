@class NSArray, NSString;

@interface AWERepoSaveToAlbumModel : NSObject <ACCRepoRegister, ACCRepoSaveToAlbumData, NSCopying>

@property (retain, nonatomic) NSArray *imageSizeMergedArray;
@property (nonatomic) BOOL saveImageAlbumAsVideo;
@property (nonatomic) BOOL isSaveToAlbumSourceClip;
@property (nonatomic) BOOL editInEditPage;
@property (nonatomic) long long picCount;
@property (nonatomic) double videoDuration;
@property (nonatomic) double videoRate;
@property (nonatomic) BOOL isDraftResume;
@property (nonatomic) BOOL enableSaveDraft;
@property (nonatomic) BOOL saveNoBlock;
@property (nonatomic) BOOL isAutoSave;
@property (nonatomic) BOOL canRemoveBlackEdge;
@property (nonatomic) BOOL disableDownloadTrackEvent;
@property (nonatomic) BOOL onlySaveAlbum;
@property (nonatomic) double clickTime;
@property (nonatomic) long long source;
@property (copy, nonatomic) NSString *downloadActionTypeName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)repo_dataProtocol;
+ (long long)repo_scope;

- (void)updateImageSizeMergedArray:(id)a0;
- (void)addImageSizeMerged:(struct CGSize { double x0; double x1; })a0;
- (void)clearImageSizeMergedArray;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
