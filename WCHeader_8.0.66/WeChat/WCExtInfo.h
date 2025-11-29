@class SKBuiltinBuffer_t;

@interface WCExtInfo : WXPBGeneratedMessage

@property (retain, nonatomic) SKBuiltinBuffer_t *wcstf;
@property (retain, nonatomic) SKBuiltinBuffer_t *wcste;
@property (retain, nonatomic) SKBuiltinBuffer_t *ccData;
@property (retain, nonatomic) SKBuiltinBuffer_t *userAttrInfo;
@property (retain, nonatomic) SKBuiltinBuffer_t *acgiDeviceInfo;
@property (retain, nonatomic) SKBuiltinBuffer_t *acgiTuring;
@property (retain, nonatomic) SKBuiltinBuffer_t *deviceToken;
@property (retain, nonatomic) SKBuiltinBuffer_t *behaviorId;
@property (retain, nonatomic) SKBuiltinBuffer_t *iosturingHuman;
@property (retain, nonatomic) SKBuiltinBuffer_t *iosturingOwner;

+ (void)initialize;

- (void)setIosturingOwner:(id)a0;
- (id)iosturingOwner;
- (void)setIosturingHuman:(id)a0;
- (id)iosturingHuman;
- (void)setBehaviorId:(id)a0;
- (id)behaviorId;
- (void)setDeviceToken:(id)a0;
- (id)deviceToken;
- (void)setAcgiTuring:(id)a0;
- (id)acgiTuring;
- (void)setAcgiDeviceInfo:(id)a0;
- (id)acgiDeviceInfo;
- (void)setUserAttrInfo:(id)a0;
- (id)userAttrInfo;
- (void)setCcData:(id)a0;
- (id)ccData;
- (void)setWcste:(id)a0;
- (id)wcste;
- (void)setWcstf:(id)a0;
- (id)wcstf;

@end
