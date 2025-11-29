@class BaseRequest, NSMutableArray;

@interface GetLiveOnlineMemberByIdRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSMutableArray *identityIdList;

+ (void)initialize;

@end
