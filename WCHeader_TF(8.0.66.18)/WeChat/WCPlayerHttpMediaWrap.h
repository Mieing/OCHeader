@class NSString;

@interface WCPlayerHttpMediaWrap : NSObject <WCPlayerMediaExt>

@property (nonatomic) unsigned int taskId;
@property (retain, nonatomic) NSString *nsIdentifier;
@property (retain, nonatomic) NSString *nsResourceUrl;
@property (nonatomic) int bitrate;
@property (retain, nonatomic) NSString *codingFormat;
@property (nonatomic) unsigned int preloadPercent;
@property (nonatomic) unsigned long long enQueueTime;
@property (nonatomic) unsigned int taskTimeout;
@property (nonatomic) unsigned long long playerScene;
@property (nonatomic) double startDownloadTime;
@property (nonatomic) double getMoovTime;
@property (nonatomic) unsigned int blockSize;
@property (nonatomic) unsigned long long downloadType;
@property (nonatomic) int apptype;
@property (nonatomic) int filetype;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithResourceUrl:(id)a0 bitrate:(int)a1;
- (id)getMediaWrapIdentifier;
- (id)getMediaWrapUrl;
- (id)getTempVideoPath;
- (id)getFormatVideoPath;
- (id)getThumbImagePath;
- (id)getTempDirectory;
- (unsigned int)getPreloadPercent;
- (id)getHTTPReferer;
- (BOOL)isLIFOPreloadTask;
- (int)getBitrate;
- (id)getCodingFormat;
- (id)generateDownloadArgsWrapWithPlayerScene:(unsigned long long)a0;
- (int)getFileTypeWithPlayerScene:(unsigned long long)a0;
- (void).cxx_destruct;

@end
