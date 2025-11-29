@class BaseRequest, NSString, NSData, FinderBaseRequest, FinderClientStatus;

@interface FinderGetLikedListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned long long lastDisplayid;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *targetUsername;
@property (nonatomic) unsigned int tabType;
@property (retain, nonatomic) FinderClientStatus *status;

+ (void)initialize;

@end
