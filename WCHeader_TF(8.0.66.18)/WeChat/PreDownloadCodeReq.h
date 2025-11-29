@class BaseRequest, SyncVersionSingleReqInfo, NSString;

@interface PreDownloadCodeReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) SyncVersionSingleReqInfo *req;
@property (nonatomic) BOOL separate;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *specialNeedModuleName;

+ (void)initialize;

@end
