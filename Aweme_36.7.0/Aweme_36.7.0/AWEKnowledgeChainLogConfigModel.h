@class NSArray, NSString;

@interface AWEKnowledgeChainLogConfigModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL assertEnable;
@property (nonatomic) unsigned long long moduleAllowListMode;
@property (copy, nonatomic) NSArray *moduleBlackList;
@property (copy, nonatomic) NSArray *moduleWhiteList;
@property (nonatomic) unsigned long long linkAllowListMode;
@property (copy, nonatomic) NSArray *linkBlackList;
@property (copy, nonatomic) NSArray *linkWhiteList;
@property (nonatomic) unsigned long long sourceLocationAllowListMode;
@property (copy, nonatomic) NSArray *sourceLocationBlackList;
@property (copy, nonatomic) NSArray *sourceLocationWhiteList;
@property (nonatomic) BOOL allowCheckExpandBraceEnable;
@property (nonatomic) unsigned long long allowCheckWildcardAlgorithm;
@property (nonatomic) BOOL allowCheckCacheEnable;
@property (nonatomic) long long moduleAllowCheckCacheLimit;
@property (nonatomic) long long linkAllowCheckCacheLimit;
@property (nonatomic) long long sourceAllowCheckCacheLimit;
@property (copy, nonatomic) NSString *messageSeparator;
@property (nonatomic) BOOL addSelfAddr;
@property (nonatomic) BOOL validNodeCacheEnable;
@property (copy, nonatomic) NSString *nodeInfoPrefix;
@property (nonatomic) BOOL beginShortenParamKey;
@property (nonatomic) BOOL endShortenParamKey;
@property (nonatomic) BOOL beginParamKeyAddLineNumber;
@property (nonatomic) BOOL endParamKeyAddLineNumber;
@property (nonatomic) BOOL beginCollectNodeInfo;
@property (nonatomic) BOOL endCollectNodeInfo;
@property (nonatomic) long long paramValueLengthLimit;
@property (nonatomic) BOOL warnAutoAssert;
@property (nonatomic) BOOL errorAutoAssert;
@property (nonatomic) BOOL warnAutoTrack;
@property (nonatomic) BOOL errorAutoTrack;
@property (nonatomic) BOOL endOmitFileName;
@property (nonatomic) BOOL endOmitFuncName;
@property (nonatomic) BOOL endOmitModule;
@property (nonatomic) BOOL endOmitLinks;
@property (nonatomic) BOOL endOmitAddr;
@property (nonatomic) BOOL statisticEnable;
@property (nonatomic) unsigned long long statisticTrackOccasion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)moduleAllowListModeJSONTransformer;
+ (id)linkAllowListModeJSONTransformer;
+ (id)sourceLocationAllowListModeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
