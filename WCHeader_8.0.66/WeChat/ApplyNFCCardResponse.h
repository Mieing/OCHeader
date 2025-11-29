@class NSString, NSData, BaseResponse;

@interface ApplyNFCCardResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (retain, nonatomic) NSData *enPassData;
@property (retain, nonatomic) NSData *ephemeralPublicKey;
@property (retain, nonatomic) NSString *cardId;
@property (retain, nonatomic) NSString *cardType;

+ (void)initialize;

@end
