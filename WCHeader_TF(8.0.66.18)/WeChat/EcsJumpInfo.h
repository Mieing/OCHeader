@class EcsJumpInfo_EcsMiniAppInfo, EcsJumpInfo_EcsNativeInfo, NSString, EcsJumpInfo_EcsCgiPreloadInfo, EcsJumpInfo_EcsHtml5Info, NSMutableArray, EcsJumpInfo_EcsLiteAppInfo;

@interface EcsJumpInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int jumpBizType;
@property (retain, nonatomic) EcsJumpInfo_EcsMiniAppInfo *miniAppInfo;
@property (retain, nonatomic) EcsJumpInfo_EcsLiteAppInfo *liteAppInfo;
@property (retain, nonatomic) EcsJumpInfo_EcsHtml5Info *html5Info;
@property (retain, nonatomic) NSMutableArray *jumpPriority;
@property (retain, nonatomic) EcsJumpInfo_EcsNativeInfo *nativeInfo;
@property (retain, nonatomic) NSMutableArray *featrueList;
@property (retain, nonatomic) NSString *requestId;
@property (nonatomic) BOOL deliverGmsgId;
@property (retain, nonatomic) EcsJumpInfo_EcsCgiPreloadInfo *cgiPreloadInfo;

+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnTypeForWCDB;
+ (void)initialize;

- (void)setCgiPreloadInfo:(id)a0;
- (id)cgiPreloadInfo;
- (void)setDeliverGmsgId:(BOOL)a0;
- (BOOL)deliverGmsgId;
- (void)setRequestId:(id)a0;
- (id)requestId;
- (void)setFeatrueList:(id)a0;
- (id)featrueList;
- (void)setNativeInfo:(id)a0;
- (id)nativeInfo;
- (void)setJumpPriority:(id)a0;
- (id)jumpPriority;
- (void)setHtml5Info:(id)a0;
- (id)html5Info;
- (void)setLiteAppInfo:(id)a0;
- (id)liteAppInfo;
- (void)setMiniAppInfo:(id)a0;
- (id)miniAppInfo;
- (void)setJumpBizType:(unsigned int)a0;
- (unsigned int)jumpBizType;
- (id)archivedWCTValue;
- (id)initWithJson:(id)a0;
- (BOOL)isValid;

@end
