@class NSString, NSDictionary, CJPayBDCreateOrderResponse, CJPayNavigationController, CJPayDefaultChannelShowConfig;

@interface CJPayDouPayProcessModel : NSObject

@property (nonatomic) unsigned long long cashierType;
@property (nonatomic) unsigned long long resultPageStyle;
@property (nonatomic) unsigned long long pwdPageStyle;
@property (nonatomic) BOOL isShowMask;
@property (nonatomic) BOOL isFromOuterApp;
@property (copy, nonatomic) NSDictionary *outerPayTrackDict;
@property (nonatomic) BOOL isFromDyPayHomePage;
@property (copy, nonatomic) NSString *bizPayOuterAppId;
@property (nonatomic) BOOL isFrontPasswordVerify;
@property (nonatomic) BOOL isCallBackAdvance;
@property (nonatomic) BOOL isHasLaterProcess;
@property (nonatomic) BOOL notStopLoadingWhenQuerySuccess;
@property (retain, nonatomic) CJPayDefaultChannelShowConfig *showConfig;
@property (weak, nonatomic) id homeVC;
@property (retain, nonatomic) CJPayBDCreateOrderResponse *createResponse;
@property (nonatomic) unsigned long long lynxBindCardBizScence;
@property (copy, nonatomic) id /* block */ refreshCreateOrderBlock;
@property (copy, nonatomic) id /* block */ queryFinishBlock;
@property (copy, nonatomic) NSDictionary *bizParams;
@property (copy, nonatomic) NSDictionary *extParams;
@property (copy, nonatomic) NSDictionary *bindCardExtParams;
@property (weak, nonatomic) CJPayNavigationController *noAnimationPushNavi;
@property (copy, nonatomic) id /* block */ specialProcessBlock;
@property (copy, nonatomic) id /* block */ buildRefreshCreateExtParams;

- (void).cxx_destruct;

@end
