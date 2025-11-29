@class NSString;

@interface BDSHVideoModel : NSObject

@property (copy, nonatomic) NSString *preloadKey;
@property (copy, nonatomic) NSString *videoId;
@property (copy, nonatomic) NSString *videoModelStr;
@property (copy, nonatomic) NSString *poster;
@property (copy, nonatomic) NSString *playUrl;
@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *subTag;
@property (nonatomic) double initTime;
@property (nonatomic) long long cacheSize;
@property (nonatomic) long long displayMode;
@property (nonatomic) long long fullscreenMode;
@property (nonatomic) BOOL autoPrepare;
@property (nonatomic) BOOL pauseOnHide;
@property (nonatomic) BOOL autoPlay;
@property (nonatomic) BOOL loop;
@property (nonatomic) BOOL muted;

- (void).cxx_destruct;

@end
