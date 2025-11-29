@class BaseRequest, NSMutableArray, NSString;

@interface BatchGetAppMsgReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *urlList;
@property (retain, nonatomic) NSMutableArray *reqInfoList;
@property (retain, nonatomic) NSString *netType;
@property (nonatomic) unsigned long long tmplControlFlag;
@property (nonatomic) unsigned int stripPreloadNum;
@property (nonatomic) unsigned int listType;
@property (retain, nonatomic) NSMutableArray *typeInfoList;

+ (void)initialize;

- (void)setTypeInfoList:(id)a0;
- (id)typeInfoList;
- (void)setListType:(unsigned int)a0;
- (unsigned int)listType;
- (void)setStripPreloadNum:(unsigned int)a0;
- (unsigned int)stripPreloadNum;
- (void)setTmplControlFlag:(unsigned long long)a0;
- (unsigned long long)tmplControlFlag;
- (void)setNetType:(id)a0;
- (id)netType;
- (void)setReqInfoList:(id)a0;
- (id)reqInfoList;
- (void)setUrlList:(id)a0;
- (id)urlList;
- (void)setBaseRequest:(id)a0;
- (id)baseRequest;

@end
