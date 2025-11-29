@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderLiveAnchorModPromoteInfoListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned int opType;
@property (retain, nonatomic) NSData *opCmdReqBuf;

+ (void)initialize;

@end
