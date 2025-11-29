@class NSString, CJPayKeepDialogStandard;

@interface CJPayLynxSchemaConfig : JSONModel

@property (copy, nonatomic) NSString *myYHCard;
@property (copy, nonatomic) NSString *retainPopup;
@property (retain, nonatomic) CJPayKeepDialogStandard *keepDialogStandardNew;
@property (copy, nonatomic) NSString *loginInfo;
@property (copy, nonatomic) NSString *dydepositSchema;
@property (copy, nonatomic) NSString *inviteShareCard;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
