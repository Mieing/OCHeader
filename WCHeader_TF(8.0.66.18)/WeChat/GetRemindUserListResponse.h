@class NSData, NSMutableArray, BaseResponse;

@interface GetRemindUserListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *contentRelatedUserList;
@property (retain, nonatomic) NSMutableArray *normalUserList;
@property (retain, nonatomic) NSData *context;
@property (nonatomic) BOOL hasNext;

+ (void)initialize;

@end
