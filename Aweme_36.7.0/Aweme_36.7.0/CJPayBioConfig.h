@class NSString;

@interface CJPayBioConfig : JSONModel

@property (copy, nonatomic) NSString *inbackToPasscodeFaceText;
@property (copy, nonatomic) NSString *inbackToPasscodeFingerText;
@property (copy, nonatomic) NSString *bioVerifyFailedFaceText;
@property (copy, nonatomic) NSString *bioVerifyFailedFingerText;
@property (copy, nonatomic) NSString *systemAuthorityPasswordGuide;
@property (copy, nonatomic) NSString *systemAuthorityConfirmBtnDesc;
@property (copy, nonatomic) NSString *systemAuthorityTitle;
@property (copy, nonatomic) NSString *systemAuthoritySubTitle;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
