@class NSMutableArray, BaseResponse;

@interface InitContactResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int currentWxcontactSeq;
@property (nonatomic) unsigned int currentChatRoomContactSeq;
@property (nonatomic) unsigned int continueFlag;
@property (retain, nonatomic) NSMutableArray *contactUsernameList;

+ (void)initialize;

@end
