@class NSString, CJPayMemberFaceVerifyInfoModel, CJPayErrorButtonInfo;

@interface CJPayMemVerifyBizOrderResponse : CJPayBaseResponse

@property (nonatomic) BOOL needSignCard;
@property (copy, nonatomic) NSString *signOrderNo;
@property (copy, nonatomic) NSString *additionalVerifyType;
@property (retain, nonatomic) CJPayMemberFaceVerifyInfoModel *faceVerifyInfoModel;
@property (retain, nonatomic) CJPayErrorButtonInfo *buttonInfo;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
