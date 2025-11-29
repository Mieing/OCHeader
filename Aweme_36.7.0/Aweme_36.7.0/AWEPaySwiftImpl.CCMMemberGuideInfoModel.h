@class _TtC15AWEPaySwiftImpl19CCMVerifyMemberInfo, _TtC15AWEPaySwiftImpl13CCMSetPwdInfo, _TtC15AWEPaySwiftImpl15CCMBindCardInfo, _TtC15AWEPaySwiftImpl17CCMCreateAuthInfo, _TtC15AWEPaySwiftImpl24CCMSwitchUserAccountInfo, _TtC15AWEPaySwiftImpl23CCMMemberGuidePopupInfo, _TtC15AWEPaySwiftImpl21CCMUserOtherGuideInfo;

@interface AWEPaySwiftImpl.CCMMemberGuideInfoModel : MTLModel <MTLJSONSerializing>

@property (nonatomic, retain) _TtC15AWEPaySwiftImpl19CCMVerifyMemberInfo *verifyMemberInfo;
@property (nonatomic, retain) _TtC15AWEPaySwiftImpl13CCMSetPwdInfo *setPwdInfo;
@property (nonatomic, retain) _TtC15AWEPaySwiftImpl15CCMBindCardInfo *bindCardInfo;
@property (nonatomic, retain) _TtC15AWEPaySwiftImpl17CCMCreateAuthInfo *createAuthInfo;
@property (nonatomic, retain) _TtC15AWEPaySwiftImpl23CCMMemberGuidePopupInfo *guidePopupInfo;
@property (nonatomic, retain) _TtC15AWEPaySwiftImpl24CCMSwitchUserAccountInfo *switchUserAccountInfo;
@property (nonatomic, retain) _TtC15AWEPaySwiftImpl21CCMUserOtherGuideInfo *userOtherGuideInfo;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
