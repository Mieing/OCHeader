@class BaseRequest, NSString, NSData, FinderBaseRequest, FinderClientStatus;

@interface FinderGetFavListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int tabType;
@property (retain, nonatomic) FinderClientStatus *status;
@property (nonatomic) unsigned long long topicId;
@property (nonatomic) unsigned int favType;
@property (nonatomic) unsigned int requestType;

+ (void)initialize;

@end
