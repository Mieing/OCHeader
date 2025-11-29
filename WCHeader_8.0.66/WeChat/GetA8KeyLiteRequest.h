@class BaseRequest, NSString, NSMutableArray;

@interface GetA8KeyLiteRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int batchCount;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int reason;
@property (nonatomic) unsigned int fontScale;
@property (retain, nonatomic) NSString *netType;
@property (retain, nonatomic) NSString *outerUrl;
@property (nonatomic) unsigned int subScene;
@property (retain, nonatomic) NSMutableArray *reqInfo;
@property (retain, nonatomic) NSMutableArray *prefetchDomainInfos;

+ (void)initialize;

- (void)setPrefetchDomainInfos:(id)a0;
- (id)prefetchDomainInfos;
- (void)setReqInfo:(id)a0;
- (id)reqInfo;
- (void)setSubScene:(unsigned int)a0;
- (unsigned int)subScene;
- (void)setOuterUrl:(id)a0;
- (id)outerUrl;
- (void)setNetType:(id)a0;
- (id)netType;
- (void)setFontScale:(unsigned int)a0;
- (unsigned int)fontScale;
- (void)setReason:(unsigned int)a0;
- (unsigned int)reason;
- (void)setScene:(unsigned int)a0;
- (unsigned int)scene;
- (void)setBatchCount:(unsigned int)a0;
- (unsigned int)batchCount;
- (void)setBaseRequest:(id)a0;
- (id)baseRequest;

@end
