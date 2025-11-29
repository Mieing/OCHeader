@class NSString, AWEMusicModel;

@interface AWELivePhotoVideoGenerationParams : NSObject

@property (copy, nonatomic) NSString *videoPath;
@property (copy, nonatomic) NSString *imagePath;
@property (copy, nonatomic) NSString *draftFolder;
@property (retain, nonatomic) AWEMusicModel *musicModel;
@property (nonatomic) BOOL needMergeImage;
@property (nonatomic) BOOL isReedit;
@property (copy, nonatomic) id /* block */ completion;

+ (id)paramsWithVideoPath:(id)a0 imagePath:(id)a1 draftFolder:(id)a2 musicModel:(id)a3 needMergeImage:(BOOL)a4 isReedit:(BOOL)a5 completion:(id /* block */)a6;

- (void).cxx_destruct;

@end
