@class NSString, BaseResponse;

@interface PreAcceptGiftCardResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *fromUserName;
@property (retain, nonatomic) NSString *fromUserHeadImgUrl;
@property (nonatomic) unsigned int status;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) NSString *buttonWording;
@property (retain, nonatomic) NSString *backgroundColor;
@property (nonatomic) BOOL ignore;
@property (retain, nonatomic) NSString *packageUrl;
@property (retain, nonatomic) NSString *buttonColor;
@property (retain, nonatomic) NSString *outOfCardWording;
@property (retain, nonatomic) NSString *seeOtherWording;

+ (void)initialize;

@end
