@class NSString, CJPayFaceVerifyInfo;

@interface CJPayVerifyInfoResponse : CJPayBaseResponse

@property (copy, nonatomic) NSString *verifyType;
@property (copy, nonatomic) NSString *jumpUrl;
@property (retain, nonatomic) CJPayFaceVerifyInfo *faceVerifyInfo;
@property (copy, nonatomic) NSString *verifyOrderNo;
@property (copy, nonatomic) NSString *verifyID;
@property (copy, nonatomic) NSString *verifyToken;
@property (copy, nonatomic) NSString *stdVerifyTag;
@property (readonly, nonatomic) BOOL useStandardVerify;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
