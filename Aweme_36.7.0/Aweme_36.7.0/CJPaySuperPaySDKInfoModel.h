@class NSString, CJPayProcessInfo;

@interface CJPaySuperPaySDKInfoModel : JSONModel

@property (retain, nonatomic) CJPayProcessInfo *processInfo;
@property (copy, nonatomic) NSString *processInstruct;
@property (copy, nonatomic) NSString *merchantId;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *extParam;
@property (nonatomic) BOOL assetStandard;

+ (id)keyMapper;

- (void).cxx_destruct;

@end
