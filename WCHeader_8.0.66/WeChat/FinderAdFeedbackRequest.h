@class BaseRequest, NSString, FinderBaseRequest, NSMutableArray;

@interface FinderAdFeedbackRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSMutableArray *reasonIdList;
@property (retain, nonatomic) NSString *reportData;
@property (retain, nonatomic) NSString *reportBypData;
@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int businessType;

+ (void)initialize;

@end
