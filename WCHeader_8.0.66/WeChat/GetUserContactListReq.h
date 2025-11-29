@class BaseRequest, NSMutableArray;

@interface GetUserContactListReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *bizusername;
@property (nonatomic) BOOL isFetchAllContact;

+ (void)initialize;

@end
