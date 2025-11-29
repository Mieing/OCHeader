@interface MMLiveRciABtestInfo : NSObject

@property (nonatomic) BOOL enableRciAnchor;
@property (nonatomic) BOOL enableRciAudience;
@property (nonatomic) BOOL allowCompressedForRenderingYUV;
@property (nonatomic) BOOL allowCompressedForSrc;
@property (nonatomic) long long effectFallbackFlags;

+ (id)sharedInstance;

- (void)loadInfo;

@end
