@class BaseRequest, NSString, NSData, FinderBaseRequest, NSMutableArray;

@interface FinderSearchInteractionRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *query;
@property (retain, nonatomic) NSData *lastBuff;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *requestId;
@property (retain, nonatomic) NSMutableArray *tags;

+ (void)initialize;

@end
