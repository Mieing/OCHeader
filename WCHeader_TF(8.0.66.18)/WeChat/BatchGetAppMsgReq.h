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

@end
