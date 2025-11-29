@class BaseRequest, NSString;

@interface GetUserRankLikeCountRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) BOOL latestrank;
@property (retain, nonatomic) NSString *rankid;
@property (retain, nonatomic) NSString *appusername;
@property (retain, nonatomic) NSString *championname;

+ (void)initialize;

@end
