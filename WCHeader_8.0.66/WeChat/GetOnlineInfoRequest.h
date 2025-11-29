@class BaseRequest, NSString, NSMutableArray;

@interface GetOnlineInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *language;
@property (nonatomic) unsigned int lastOnlineCount;
@property (retain, nonatomic) NSMutableArray *lastOnlineList;
@property (nonatomic) unsigned int roamFlag;

+ (void)initialize;

@end
