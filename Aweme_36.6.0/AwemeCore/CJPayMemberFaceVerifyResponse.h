@class NSString;

@interface CJPayMemberFaceVerifyResponse : CJPayBaseResponse

@property (copy, nonatomic) NSString *faceRecognitionType;
@property (copy, nonatomic) NSString *faceContent;
@property (copy, nonatomic) NSString *nameMask;
@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *asyncInvokeResult;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (unsigned long long)obtainFaceVerificationResult;
- (void).cxx_destruct;

@end
