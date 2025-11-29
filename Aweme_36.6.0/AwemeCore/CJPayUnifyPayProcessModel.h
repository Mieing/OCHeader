@class NSString, CJPayNavigationController, CJPayUnifyCashierRenderModel, CJPayUnifyPayProcessRequestModel, CJPayDefaultChannelShowConfig;
@protocol CJPay3DSVerifyProtocol, CJPayUnifyPayProcessRequestProtocol, CJPayBaseLoadingProtocol;

@interface CJPayUnifyPayProcessModel : NSObject

@property (retain, nonatomic) CJPayUnifyCashierRenderModel *renderModel;
@property (retain, nonatomic) CJPayDefaultChannelShowConfig *selectedShowConfig;
@property (retain, nonatomic) CJPayUnifyPayProcessRequestModel *requestModel;
@property (weak, nonatomic) id<CJPayBaseLoadingProtocol> loadingDelegate;
@property (weak, nonatomic) CJPayNavigationController *navigationController;
@property (nonatomic) BOOL isContinueLoadingOnError;
@property (weak, nonatomic) id<CJPay3DSVerifyProtocol> dsVerifyModule;
@property (retain, nonatomic) id<CJPayUnifyPayProcessRequestProtocol> requestAdapter;
@property (copy, nonatomic) NSString *lastPWD;
@property (nonatomic) long long queryTimes;
@property (nonatomic) BOOL canOpenBio;

- (void).cxx_destruct;

@end
