@class NSString, BaseResponse;

@interface DeleteCardInTicketListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retCode;
@property (retain, nonatomic) NSString *retMsg;

+ (void)initialize;

@end
