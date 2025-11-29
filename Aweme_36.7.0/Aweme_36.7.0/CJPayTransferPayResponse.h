@class NSString, CJPayFaceVerifyInfo;

@interface CJPayTransferPayResponse : CJPayIntergratedBaseResponse

@property (copy, nonatomic) NSString *lynxUrl;
@property (retain, nonatomic) CJPayFaceVerifyInfo *faceVerifyInfo;
@property (copy, nonatomic) NSString *verifyId;
@property (copy, nonatomic) NSString *verifyToken;

+ (id)keyMapper;

- (void).cxx_destruct;

@end
