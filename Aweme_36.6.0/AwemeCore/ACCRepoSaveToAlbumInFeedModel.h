@class NSArray, NSString;

@interface ACCRepoSaveToAlbumInFeedModel : NSObject <ACCRepoRegister, ACCRepoSaveToAlbumInFeedData, NSCopying>

@property (retain, nonatomic) NSArray *imageSizeMergedArray;
@property (nonatomic) BOOL saveImageAlbumAsVideo;
@property (nonatomic) BOOL canRemoveBlackEdge;
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
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
