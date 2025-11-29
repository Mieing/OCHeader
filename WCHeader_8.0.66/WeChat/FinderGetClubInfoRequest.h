@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderGetClubInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *chatroomId;
@property (nonatomic) unsigned int role;

+ (void)initialize;

- (void)setRole:(unsigned int)a0;
- (unsigned int)role;
- (void)setChatroomId:(id)a0;
- (id)chatroomId;
- (void)setFinderBasereq:(id)a0;
- (id)finderBasereq;
- (void)setBaseRequest:(id)a0;
- (id)baseRequest;

@end
