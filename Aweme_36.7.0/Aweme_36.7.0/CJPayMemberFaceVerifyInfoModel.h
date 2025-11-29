@class NSString;

@interface CJPayMemberFaceVerifyInfoModel : JSONModel

@property (copy, nonatomic) NSString *verifyType;
@property (copy, nonatomic) NSString *faceContent;
@property (copy, nonatomic) NSString *agreementUrl;
@property (copy, nonatomic) NSString *agreementDesc;
@property (copy, nonatomic) NSString *nameMask;
@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *smchId;
@property (nonatomic) BOOL needLiveDetection;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (id)getFaceVerifyInfoModel;
- (void).cxx_destruct;

@end
