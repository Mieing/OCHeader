@class NSString, CJPayFaceVerifyInfo, CJPayRetainUtilModel, NSDictionary, UIViewController;

@interface CJPayFaceRecogConfigModel : NSObject

@property (nonatomic) unsigned long long popStyle;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *merchantId;
@property (copy, nonatomic) NSString *memberBizOrderNo;
@property (copy, nonatomic) NSString *sourceStr;
@property (copy, nonatomic) NSString *riskSource;
@property (nonatomic) BOOL shouldCallBackAfterClose;
@property (nonatomic) BOOL shouldSkipAlertPage;
@property (nonatomic) BOOL shouldShowProtocolView;
@property (weak, nonatomic) UIViewController *fromVC;
@property (retain, nonatomic) CJPayFaceVerifyInfo *faceVerifyInfo;
@property (retain, nonatomic) CJPayRetainUtilModel *retainUtilModel;
@property (nonatomic) BOOL isMatchFullLeadPageScience;
@property (nonatomic) BOOL isOpenLeadPage;
@property (nonatomic) long long pageType;
@property (nonatomic) BOOL isSign;
@property (nonatomic) BOOL isEngimaCcit;
@property (readonly, copy, nonatomic) NSDictionary *commonTrackParams;
@property (copy, nonatomic) NSString *extraInfo;
@property (copy, nonatomic) NSString *initialSignStatus;
@property (copy, nonatomic) id /* block */ getTicketLoadingBlock;
@property (copy, nonatomic) id /* block */ pagePushBlock;
@property (copy, nonatomic) id /* block */ trackerBlock;
@property (copy, nonatomic) id /* block */ firstAlertConfirmBlock;
@property (copy, nonatomic) id /* block */ faceRecogCompletion;
@property (copy, nonatomic) id /* block */ pagePopBlock;
@property (copy, nonatomic) id /* block */ liveDetectResultLoadingBlock;
@property (copy, nonatomic) id /* block */ expandVoucherBlock;

- (void)updateWithFaceVerifyInfo:(id)a0;
- (unsigned long long)getAlertShowStyle;
- (void)mergeExtParams:(id)a0;
- (void).cxx_destruct;

@end
