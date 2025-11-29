@class NSMutableArray, BaseResponse;

@interface FinderGetContactListResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *contactList;
@property (nonatomic) unsigned int nextRetryInterval;
@property (retain, nonatomic) NSMutableArray *contactWxUsername;

+ (void)initialize;

@end
