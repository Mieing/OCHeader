@class NSString, NSData, BaseResponse;

@interface GetAvailableCardResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *jsonRet;
@property (nonatomic) unsigned int isEnd;
@property (retain, nonatomic) NSData *buff;

+ (void)initialize;

@end
