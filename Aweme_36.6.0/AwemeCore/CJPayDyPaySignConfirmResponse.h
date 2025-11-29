@class NSString, CJPayDyPaySignConfirmNextActionModel, CJPayDyPaySignCompleteNextActionModel;

@interface CJPayDyPaySignConfirmResponse : CJPayBaseResponse

@property (copy, nonatomic) NSString *signStatusIconURL;
@property (copy, nonatomic) NSString *signStatus;
@property (copy, nonatomic) NSString *signStatusDesc;
@property (copy, nonatomic) NSString *signResultDesc;
@property (copy, nonatomic) NSString *backGroundURL;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *lynxURL;
@property (copy, nonatomic) NSString *voucherPromotionPutInfo;
@property (retain, nonatomic) CJPayDyPaySignConfirmNextActionModel *nextActionModel;
@property (retain, nonatomic) CJPayDyPaySignCompleteNextActionModel *completeNextActionModel;
@property (readonly, nonatomic) unsigned long long dypaySignStatus;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)basicDict;

- (void).cxx_destruct;
- (BOOL)isSuccess;

@end
