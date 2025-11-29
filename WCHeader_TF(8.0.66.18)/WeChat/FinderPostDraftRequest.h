@class FinderPostTraceInfo, BaseRequest, NSString, NSData, FinderBaseRequest, FinderAttachmentList, FinderObjectDesc;

@interface FinderPostDraftRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) FinderObjectDesc *objectDesc;
@property (nonatomic) unsigned int objectType;
@property (retain, nonatomic) NSString *clientId;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) FinderAttachmentList *attachmentList;
@property (nonatomic) unsigned int handleFlag;
@property (nonatomic) unsigned long long postFlag;
@property (retain, nonatomic) NSData *sdkMediaFeature;
@property (retain, nonatomic) FinderPostTraceInfo *traceInfo;
@property (retain, nonatomic) NSData *finderSecretData;

+ (void)initialize;

@end
