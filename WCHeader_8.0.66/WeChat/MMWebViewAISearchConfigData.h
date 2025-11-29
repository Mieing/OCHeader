@class NSString, MMWebViewAISearchConfig, MMWebViewAISearchHalfScreenConfig;

@interface MMWebViewAISearchConfigData : NSObject <PBCoding>

@property (retain, nonatomic) MMWebViewAISearchConfig *aiSearchConfig;
@property (retain, nonatomic) MMWebViewAISearchHalfScreenConfig *halfScreenConfig;
@property (nonatomic) unsigned long long expireTimeSec;
@property (nonatomic) unsigned int configType;
@property (copy, nonatomic) NSString *sessionId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_aiSearchConfig;
+ (void)PBArrayAdd_halfScreenConfig;
+ (void)PBArrayAdd_expireTimeSec;
+ (void)PBArrayAdd_configType;
+ (void)PBArrayAdd_sessionId;
+ (void)initialize;

- (id)getPBPropertyTable;
- (BOOL)isCacheValid;
- (void).cxx_destruct;

@end
