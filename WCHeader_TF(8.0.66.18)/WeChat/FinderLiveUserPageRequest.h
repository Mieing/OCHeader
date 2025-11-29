@class BaseRequest, NSString, NSData, FinderBaseRequest, FinderClientStatus;

@interface FinderLiveUserPageRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) FinderClientStatus *status;
@property (retain, nonatomic) NSData *sectionBuffer;
@property (nonatomic) unsigned long long flag;

+ (void)initialize;

@end
