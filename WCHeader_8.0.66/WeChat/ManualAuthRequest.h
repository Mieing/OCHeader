@class ManualAuthRsaReqData, ManualAuthAesReqData;

@interface ManualAuthRequest : WXPBGeneratedMessage

@property (retain, nonatomic) ManualAuthRsaReqData *rsaReqData;
@property (retain, nonatomic) ManualAuthAesReqData *aesReqData;

+ (void)initialize;

- (void)setAesReqData:(id)a0;
- (id)aesReqData;
- (void)setRsaReqData:(id)a0;
- (id)rsaReqData;

@end
