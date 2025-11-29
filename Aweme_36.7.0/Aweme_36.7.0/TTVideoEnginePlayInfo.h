@class NSString, TTVideoEngineInfoModel;

@interface TTVideoEnginePlayInfo : NSObject <TTVideoEngineSource, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) TTVideoEngineInfoModel *videoInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)supportedResolutionTypes;
- (id)videoInfoForType:(unsigned long long)a0;
- (id)supportedQualityInfos;
- (id)allURLWithDefinitionType:(unsigned long long)a0 transformedURL:(BOOL)a1;
- (id)videoInfoForType:(unsigned long long)a0 otherCondition:(id)a1;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
