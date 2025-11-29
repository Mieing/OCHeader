@class BaseRequest, NSString, NSMutableArray;

@interface LikeFriendRankRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *appusername;
@property (nonatomic) unsigned int optype;
@property (retain, nonatomic) NSString *rankid;
@property (retain, nonatomic) NSMutableArray *usernames;

+ (void)initialize;

@end
