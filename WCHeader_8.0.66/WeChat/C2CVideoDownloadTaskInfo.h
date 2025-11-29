@class NSString, WCDownloadArgsWrap, CMessageWrap;

@interface C2CVideoDownloadTaskInfo : NSObject

@property (nonatomic) BOOL isPlaying;
@property (nonatomic) BOOL isRunning;
@property (nonatomic) BOOL isSaveAlbum;
@property (retain, nonatomic) NSString *chatName;
@property (retain, nonatomic) CMessageWrap *msgWrap;
@property (retain, nonatomic) WCDownloadArgsWrap *downloadArgsWrap;

+ (void)onVideoProgressUpdate:(id)a0 progressInfo:(id)a1;
+ (void)onVideoComplete:(id)a0 argsWrap:(id)a1 isSaveAlbum:(BOOL)a2;

- (BOOL)isRawTask;
- (id)key;
- (id)initWithDownloadArgsWrap:(id)a0 isSaveAlbum:(BOOL)a1;
- (void)dealloc;
- (void)configCallback;
- (void)configRawVideoCallback;
- (BOOL)checkIfBlockTaskBeforeStart;
- (id)description;
- (void).cxx_destruct;

@end
