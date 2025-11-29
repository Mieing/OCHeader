@class NSString, ArgusLynxSecurityVerificationEntity, ArgusLynxTemplateResourceInfo;

@interface ArgusLynxPageInfo : ArgusBaseAsepctParams

@property (copy, nonatomic) NSString *verifyUrl;
@property (retain, nonatomic) ArgusLynxSecurityVerificationEntity *lynxVerifyEntity;
@property (copy, nonatomic) NSString *rawRenderUrl;
@property (nonatomic) long long tasmType;
@property (retain, nonatomic) ArgusLynxTemplateResourceInfo *resourceInfo;
@property (nonatomic) long long feId;
@property (nonatomic) long long tasmFeId;

- (id)feId_str;
- (id)initWithRenderUrl:(id)a0 resourceInfo:(id)a1;
- (id)initWithLynxVerifyEntity:(id)a0;
- (id)_setupVerifyUrl;
- (void).cxx_destruct;

@end
