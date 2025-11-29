@interface MJMovieComposingConfiguration : NSObject

@property (readonly, nonatomic) BOOL shouldShowTitleGuide;
@property (readonly, nonatomic) BOOL shouldShowAssetAddingEntry;
@property (readonly, nonatomic) BOOL isRecognitionGuideEnabled;
@property (readonly, nonatomic) BOOL isDraftEnabled;
@property (readonly, nonatomic) BOOL isAsyncExportEnabled;
@property (readonly, nonatomic) BOOL isAudioSessionOccupiedOutside;
@property (readonly, nonatomic) long long entryScene;

- (id)initWithShouldShowTitleGuide:(BOOL)a0 shouldShowAssetAddingEntry:(BOOL)a1 isRecognitionGuideEnabled:(BOOL)a2 isDraftEnabled:(BOOL)a3 isAsyncExportEnabled:(BOOL)a4 isAudioSessionOccupiedOutside:(BOOL)a5 entryScene:(long long)a6;
- (id)description;

@end
