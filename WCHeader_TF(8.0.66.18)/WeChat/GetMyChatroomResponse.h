@class MyChatroomNotice, NSString, NSMutableArray, BaseResponse;

@interface GetMyChatroomResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *nextVersion;
@property (retain, nonatomic) NSMutableArray *myChatroomInfoList;
@property (retain, nonatomic) MyChatroomNotice *myChatroomNotice;

+ (void)initialize;

@end
