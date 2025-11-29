@class NSArray, NSString;

@interface TTVideoEngineDynamicVideo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL hasVideo;
@property (copy, nonatomic) NSArray *dynamicVideoInfo;
@property (copy, nonatomic) NSArray *dynamicAudioInfoV3;
@property (copy, nonatomic) NSArray *dynamicVideoInfoV3;
@property (copy, nonatomic) NSArray *dubbedAudioInfo;
@property (copy, nonatomic) NSArray *originalAudioInfo;
@property (nonatomic) long long defaultAudioInfoId;
@property (copy, nonatomic) NSString *mainURL;
@property (copy, nonatomic) NSString *backupURL;
@property (copy, nonatomic) NSString *dynamicType;
@property (nonatomic) long long videoModelVersion;

- (void)setUpResolutionMap:(id)a0;
- (id)allURLForVideoID:(id)a0 transformedURL:(BOOL)a1;
- (id)videoForBitrate:(long long)a0 mediaType:(id)a1;
- (id)getUrlInfoWithMediaInfoId:(long long)a0;
- (id)videoForResolutionType:(unsigned long long)a0 mediaType:(id)a1 otherCondition:(id)a2;
- (id)videoForResolutionType:(unsigned long long)a0;
- (id)getSupportedTTSAudioInfo;
- (id)getOriginalAudioInfo;
- (id)getSupportedMediaInfoIds:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0 key:(id)a1;

@end
