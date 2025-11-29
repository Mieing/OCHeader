@class BaseRequest, FinderBaseRequest, NSString;

@interface ManageFinderMemberUserRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned int operationType;
@property (nonatomic) unsigned int userAcctType;
@property (nonatomic) unsigned long long refObjectid;
@property (nonatomic) unsigned long long refCommentid;

+ (void)initialize;

@end
