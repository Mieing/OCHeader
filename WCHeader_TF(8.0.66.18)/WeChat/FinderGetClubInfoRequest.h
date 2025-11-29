@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderGetClubInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *chatroomId;
@property (nonatomic) unsigned int role;

+ (void)initialize;

@end
