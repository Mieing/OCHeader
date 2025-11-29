@class BaseRequest, NSString, FinderBaseRequest, NSMutableArray;

@interface FinderGetUserRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *username;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSMutableArray *nickname;
@property (retain, nonatomic) NSString *exportUsername;

+ (void)initialize;

@end
