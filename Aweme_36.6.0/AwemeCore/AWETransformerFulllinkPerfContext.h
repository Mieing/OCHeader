@class NSArray;

@interface AWETransformerFulllinkPerfContext : NSObject

@property (nonatomic) long long phase;
@property (nonatomic) double triggerTs;
@property (nonatomic) long long settingsTriggerScene;
@property (nonatomic) BOOL needDelayCount;
@property (nonatomic) double requestStartTs;
@property (nonatomic) double requestStartDateTs;
@property (nonatomic) double settingsRequestDuration;
@property (nonatomic) double binaryToJsonDuration;
@property (nonatomic) double jsonToModelDuration;
@property (nonatomic) double didFinishRequestTs;
@property (nonatomic) double sdkWillProcessTs;
@property (nonatomic) double sdkFmpDuration;
@property (copy, nonatomic) NSArray *elementIDs;
@property (copy, nonatomic) NSArray *reuseElementIDs;
@property (nonatomic) double sdkDidFinishProcssTs;
@property (nonatomic) double endTs;
@property (nonatomic) BOOL useCache;
@property (nonatomic) BOOL usePreRequest;
@property (nonatomic) BOOL hasExposeCard;
@property (nonatomic) BOOL preloadResourceResult;
@property (nonatomic) long long cacheStrategy;
@property (nonatomic) unsigned long long rowType;
@property (nonatomic) long long pageType;

- (void).cxx_destruct;
- (id)dictRepresentation;

@end
