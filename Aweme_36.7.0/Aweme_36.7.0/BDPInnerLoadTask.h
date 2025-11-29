@class NSString, BDPAppPreloadInfo, BDPAppLoadContext, BDPTrackEventInfo, BDPModel, NSMutableArray;
@protocol BDPMetaTaskCancelable;

@interface BDPInnerLoadTask : BDPAppLoadBaseTask

@property (retain, nonatomic) BDPAppPreloadInfo *preloadInfo;
@property (copy, nonatomic) BDPTrackEventInfo *trackInfo;
@property (retain, nonatomic) BDPAppLoadContext *context;
@property (retain, nonatomic) id<BDPMetaTaskCancelable> requestToken;
@property (retain, nonatomic) id downloadToken;
@property (readonly, nonatomic) BOOL isTmg;
@property (copy, nonatomic) id /* block */ extraMetaCompletedBlk;
@property (copy, nonatomic) NSString *uniqueId;
@property (readonly, nonatomic) NSString *versionType;
@property (readonly, nonatomic) NSString *token;
@property (readonly, nonatomic) NSString *ideToken;
@property (readonly, nonatomic) BOOL isSandBox;
@property (readonly, nonatomic) NSString *latestVersionNum;
@property (readonly, nonatomic) NSString *latestVersionTag;
@property (retain, nonatomic) BDPModel *oldMeta;
@property (nonatomic) BOOL metaDidCache;
@property (nonatomic) BOOL createFromDataSource;
@property (retain, nonatomic) NSMutableArray *preloadSchemaRecord;

- (void).cxx_destruct;
- (long long)priority;
- (id)appId;

@end
