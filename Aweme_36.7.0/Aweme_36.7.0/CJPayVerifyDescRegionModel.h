@class NSString, CJPayVerifyMsgInfoModel;

@interface CJPayVerifyDescRegionModel : JSONModel

@property (copy, nonatomic) NSString *iconURL;
@property (copy, nonatomic) NSString *msg;
@property (copy, nonatomic) NSString *position;
@property (retain, nonatomic) CJPayVerifyMsgInfoModel *resetPwdVerifyMsg;
@property (nonatomic) BOOL needHidden;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void)toastVerifyTipsWhenAvailable;
- (BOOL)needInPageVerificationTips;
- (void).cxx_destruct;

@end
