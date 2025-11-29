@class MMFinderLiveKTVSongResourceLoadResult, NSString, MMFinderLiveKTVSongResourceParseResult;

@interface MMFinderLiveKTVSongResourceParseTask : NSObject

@property (retain, nonatomic) MMFinderLiveKTVSongResourceLoadResult *resource;
@property (retain, nonatomic) NSString *parseResourceDir;
@property (nonatomic) BOOL isParseFinished;
@property (retain, nonatomic) MMFinderLiveKTVSongResourceParseResult *parseResult;

- (id)initWithResource:(id)a0 parseResourceDir:(id)a1;
- (void)parseResource:(id /* block */)a0;
- (void)parseQrcResource:(id /* block */)a0;
- (void)parseNoteResource:(id /* block */)a0;
- (void)parseOriSongResource:(id /* block */)a0;
- (void)parseAccSongResource:(id /* block */)a0;
- (void)onParseFinish;
- (id)createOriginalSongPath;
- (id)createAccSongPath;
- (void).cxx_destruct;

@end
