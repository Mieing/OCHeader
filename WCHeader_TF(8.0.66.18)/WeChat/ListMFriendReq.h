@class BaseRequest, NSString, NSMutableArray;

@interface ListMFriendReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *ticket;
@property (nonatomic) unsigned int mobileCount;
@property (retain, nonatomic) NSMutableArray *mobileList;
@property (nonatomic) unsigned int emailCount;
@property (retain, nonatomic) NSMutableArray *emailList;

+ (void)initialize;

@end
