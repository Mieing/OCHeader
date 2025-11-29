@class NSString, NSLock, IESLiveKtvSongStruct;

@interface IESLiveKTVResourceSongItem : NSObject

@property (nonatomic) long long downloadedType;
@property (retain, nonatomic) NSString *originalTmpPath;
@property (retain, nonatomic) NSString *originalPath;
@property (retain, nonatomic) NSString *accompanyTmpPath;
@property (retain, nonatomic) NSString *accompanyPath;
@property (retain, nonatomic) NSString *lyricPath;
@property (retain, nonatomic) NSString *midiPath;
@property (nonatomic) float originalProgress;
@property (nonatomic) float accompanyProgress;
@property (retain, nonatomic) NSLock *lock;
@property (retain, nonatomic) IESLiveKtvSongStruct *model;
@property (nonatomic) long long resType;
@property (nonatomic) BOOL originalFirst;
@property (nonatomic) BOOL priority;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) double startTime;
@property (nonatomic) double firstPartTime;

+ (long long)allResourceType:(id)a0;

- (id)lyricUrl;
- (id)initWithModel:(id)a0 resType:(long long)a1 originalFirst:(BOOL)a2 priority:(BOOL)a3 progress:(id /* block */)a4 completion:(id /* block */)a5;
- (void)updateLocalPath;
- (id)midiUrl;
- (id)accompanyUrl;
- (BOOL)isFirstPartCompleted;
- (BOOL)isAllCompleted;
- (void)addDownloadType:(long long)a0;
- (id)destPath:(long long)a0;
- (float)updateProgress:(float)a0 type:(long long)a1;
- (id)tmpPath:(long long)a0;
- (void)fixSongFileSuffix:(long long)a0;
- (void)correctOriginal;
- (void).cxx_destruct;
- (void)clear;
- (id)originalUrl;

@end
