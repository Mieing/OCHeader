@class BaseRequest, NSString, NSMutableArray;

@interface FinderTranscribeReportRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *clientId;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSMutableArray *assetInfo;
@property (nonatomic) unsigned long long userModifyTimeCost;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *postId;
@property (retain, nonatomic) NSString *editId;

+ (void)initialize;

@end
