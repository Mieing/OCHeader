@class BaseRequest, SyncVersionSingleReqInfo, NSString;

@interface PreDownloadCodeReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) SyncVersionSingleReqInfo *req;
@property (nonatomic) BOOL separate;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *specialNeedModuleName;

+ (void)initialize;

- (void)setSpecialNeedModuleName:(id)a0;
- (id)specialNeedModuleName;
- (void)setScene:(unsigned int)a0;
- (unsigned int)scene;
- (void)setSeparate:(BOOL)a0;
- (BOOL)separate;
- (void)setReq:(id)a0;
- (id)req;
- (void)setBaseRequest:(id)a0;
- (id)baseRequest;

@end
