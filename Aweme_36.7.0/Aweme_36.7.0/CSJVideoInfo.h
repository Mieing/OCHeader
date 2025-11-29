@class NSString, NSURL;

@interface CSJVideoInfo : NSObject <NSCoding>

@property (nonatomic) unsigned long long encodeType;
@property (nonatomic) long long coverHeight;
@property (nonatomic) long long coverWidth;
@property (copy, nonatomic) NSString *coverUrl;
@property (copy, nonatomic) NSString *resolution;
@property (nonatomic) double size;
@property (nonatomic) double videoDuration;
@property (copy, nonatomic) NSString *videoUrl;
@property (retain, nonatomic) NSURL *videoLocalURL;
@property (nonatomic) double playedSeconds;
@property (nonatomic) BOOL isVideoPlaying;
@property (copy, nonatomic) NSString *endcard;
@property (copy, nonatomic) NSString *playableZipUrl;
@property (copy, nonatomic) NSString *detailPage;
@property (copy, nonatomic) NSString *fileHash;
@property (nonatomic) long long fallbackEndcardJudge;
@property (nonatomic) long long video_preload_size;
@property (nonatomic) BOOL video_backup;
@property (nonatomic) unsigned long long direction;

- (void)setupDataWithDictionary:(id)a0;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)dictionaryValue;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
