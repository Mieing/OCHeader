@class NSData, BaseResponse;

@interface IlinkTransferResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSData *ilinkResponse;

+ (void)initialize;

- (void)setIlinkResponse:(id)a0;
- (id)ilinkResponse;
- (void)setBaseResponse:(id)a0;
- (id)baseResponse;

@end
