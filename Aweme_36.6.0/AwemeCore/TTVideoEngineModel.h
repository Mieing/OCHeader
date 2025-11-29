@class NSDictionary, TTVideoEngineInfoModel, NSString;

@interface TTVideoEngineModel : NSObject <TTVideoEngineModelCacheItem, TTVideoEngineSource, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *jsonInfo;
@property (retain, nonatomic) TTVideoEngineInfoModel *videoInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)videoModelWithDict:(id)a0;
+ (id)buildCacheKey:(id)a0 params:(id)a1 ptoken:(id)a2;
+ (id)videoModelWithDict:(id)a0 encrypted:(BOOL)a1;
+ (id)videoModelWithPb:(id)a0;
+ (id)videoModelWithMediaJsonString:(id)a0;

- (id)supportedResolutionTypes;
- (id)videoInfoForType:(unsigned long long)a0;
- (id)supportedQualityInfos;
- (BOOL)supportDash;
- (BOOL)supportHLS;
- (BOOL)isHaveSpadea;
- (BOOL)supportHLSSeamlessSwitch;
- (BOOL)supportBash;
- (id)dictInfo;
- (BOOL)supportMp4;
- (id)allURLWithDefinitionType:(unsigned long long)a0 transformedURL:(BOOL)a1;
- (void).cxx_destruct;
- (id)videoType;
- (BOOL)hasExpired;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)codecTypes;
- (id)codecType;

@end
