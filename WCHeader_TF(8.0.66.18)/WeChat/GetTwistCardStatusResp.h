@class NSString, BaseResponse;

@interface GetTwistCardStatusResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int status;
@property (retain, nonatomic) NSString *cardId;
@property (retain, nonatomic) NSString *giveCardId;
@property (retain, nonatomic) NSString *receiveUrl;

+ (void)initialize;

@end
