@class NSMutableArray, BaseResponse;

@interface LbsResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int contactCount;
@property (retain, nonatomic) NSMutableArray *contactList;
@property (nonatomic) unsigned int state;
@property (nonatomic) unsigned int flushTime;
@property (nonatomic) unsigned int isShowRoom;
@property (nonatomic) unsigned int roomMemberCount;

+ (void)initialize;

@end
