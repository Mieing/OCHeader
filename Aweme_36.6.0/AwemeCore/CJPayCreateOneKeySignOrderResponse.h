@class NSString, CJPayMemberFaceVerifyInfoModel, CJPayErrorButtonInfo;

@interface CJPayCreateOneKeySignOrderResponse : CJPayBaseResponse

@property (copy, nonatomic) NSString *bankUrl;
@property (copy, nonatomic) NSString *memberBizOrderNo;
@property (copy, nonatomic) NSString *postData;
@property (copy, nonatomic) NSString *signOrder;
@property (copy, nonatomic) NSString *additionalVerifyType;
@property (copy, nonatomic) CJPayMemberFaceVerifyInfoModel *faceVerifyInfoModel;
@property (retain, nonatomic) CJPayErrorButtonInfo *buttonInfo;
@property (copy, nonatomic) NSString *merchantId;
@property (copy, nonatomic) NSString *appId;
@property (nonatomic) BOOL isMiniApp;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (BOOL)needLiveDetection;
- (BOOL)needVerifyPassWord;
- (void).cxx_destruct;

@end
