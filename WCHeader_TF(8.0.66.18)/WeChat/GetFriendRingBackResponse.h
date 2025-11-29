@class GetFriendRingBackRespFriendRingBackInfo, GetFriendRingBackRespGlobalRingBackInfo, BaseResponse;

@interface GetFriendRingBackResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) GetFriendRingBackRespFriendRingBackInfo *friendRingBackInfo;
@property (retain, nonatomic) GetFriendRingBackRespGlobalRingBackInfo *globalRingBackInfo;
@property (nonatomic) BOOL isEnableCallerGetRecipientRecentStatus;

+ (void)initialize;

@end
