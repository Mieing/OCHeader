@class BaseRequest, NSString, FinderBaseRequest, NSMutableArray;

@interface FinderGetDiagnosisDataRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSMutableArray *objectIds;
@property (nonatomic) unsigned int requestFlag;

+ (void)initialize;

@end
