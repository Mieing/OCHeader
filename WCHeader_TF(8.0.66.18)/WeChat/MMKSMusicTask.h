@class NSString;

@interface MMKSMusicTask : NSObject

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *cacheId;
@property (copy, nonatomic) NSString *cacheUrl;
@property (copy, nonatomic) NSString *musicId;
@property (nonatomic) double startTime;
@property (nonatomic) BOOL isLocalFile;
@property (nonatomic) BOOL isQQMusic;
@property (nonatomic) BOOL isHLS;
@property (nonatomic) double playbackRate;
@property (copy, nonatomic) NSString *referrer;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
