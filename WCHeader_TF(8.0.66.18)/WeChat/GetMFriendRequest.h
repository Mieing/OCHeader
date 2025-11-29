@class BaseRequest, NSString, NSMutableArray;

@interface GetMFriendRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int opType;
@property (retain, nonatomic) NSString *md5;
@property (nonatomic) int updateMobileListSize;
@property (retain, nonatomic) NSMutableArray *updateMobileList;
@property (nonatomic) int updateEmailListSize;
@property (retain, nonatomic) NSMutableArray *updateEmailList;
@property (nonatomic) unsigned int scene;

+ (void)initialize;

@end
