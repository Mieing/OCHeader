@class NSData, NSMutableArray, BaseResponse;

@interface EncryptForwardWxworkMsgResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *resultList;
@property (retain, nonatomic) NSData *encryptedForwardWxworkMsgPack;

+ (void)initialize;

@end
