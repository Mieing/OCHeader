@class AutoAuthAesReqData, AutoAuthRsaReqData;

@interface AutoAuthRequest : WXPBGeneratedMessage

@property (retain, nonatomic) AutoAuthRsaReqData *rsaReqData;
@property (retain, nonatomic) AutoAuthAesReqData *aesReqData;

+ (void)initialize;

- (void)setAesReqData:(id)a0;
- (id)aesReqData;
- (void)setRsaReqData:(id)a0;
- (id)rsaReqData;

@end
