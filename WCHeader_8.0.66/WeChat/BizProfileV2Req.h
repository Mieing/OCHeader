@class BaseRequest, NSString, NSData;

@interface BizProfileV2Req : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *bizUserName;
@property (nonatomic) unsigned int actionType;
@property (retain, nonatomic) NSData *offset;
@property (nonatomic) unsigned int pageSize;
@property (nonatomic) unsigned long long tmplControlFlag;
@property (nonatomic) unsigned int bizSessionId;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *searchClickId;
@property (nonatomic) unsigned int showType;
@property (nonatomic) unsigned int bizType;

+ (void)initialize;

- (void)setBizType:(unsigned int)a0;
- (unsigned int)bizType;
- (void)setShowType:(unsigned int)a0;
- (unsigned int)showType;
- (void)setSearchClickId:(id)a0;
- (id)searchClickId;
- (void)setScene:(unsigned int)a0;
- (unsigned int)scene;
- (void)setBizSessionId:(unsigned int)a0;
- (unsigned int)bizSessionId;
- (void)setTmplControlFlag:(unsigned long long)a0;
- (unsigned long long)tmplControlFlag;
- (void)setPageSize:(unsigned int)a0;
- (unsigned int)pageSize;
- (void)setOffset:(id)a0;
- (id)offset;
- (void)setActionType:(unsigned int)a0;
- (unsigned int)actionType;
- (void)setBizUserName:(id)a0;
- (id)bizUserName;
- (void)setBaseRequest:(id)a0;
- (id)baseRequest;

@end
