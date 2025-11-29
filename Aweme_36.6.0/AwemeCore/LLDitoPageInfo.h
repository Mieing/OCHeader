@class LLDitoDisasterRecoveryConfig, NSString, NSDictionary, NSArray;

@interface LLDitoPageInfo : NSObject

@property (nonatomic) BOOL isChunkForRequest;
@property (nonatomic) BOOL endChunkForFMP;
@property (copy, nonatomic) NSString *chunkName;
@property (copy, nonatomic) NSString *abnormalInfo;
@property (copy, nonatomic) NSDictionary *themeColors;
@property (copy, nonatomic) NSDictionary *extraConfig;
@property (nonatomic) long long operation;
@property (copy, nonatomic) NSString *pageID;
@property (copy, nonatomic) NSString *realPageID;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *createdTime;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *pageKey;
@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSString *sessionType;
@property (copy, nonatomic) NSString *bizCode;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (copy, nonatomic) NSDictionary *globalTrackParams;
@property (copy, nonatomic) NSDictionary *globalBtmParams;
@property (copy, nonatomic) NSDictionary *ditoQualityParams;
@property (copy, nonatomic) NSDictionary *dataParams;
@property (copy, nonatomic) NSArray *pageEventList;
@property (readonly, nonatomic) LLDitoDisasterRecoveryConfig *disasterRecoveryConfig;
@property (readonly, nonatomic) unsigned long long halfContainerType;
@property (nonatomic) BOOL isChunkForRequest;
@property (nonatomic) BOOL endChunkForFMP;
@property (copy, nonatomic) NSString *chunkName;

+ (id)pageInfoWithData:(id)a0;
+ (id)allProperties;

- (void)updateFromNewPageInfo:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
