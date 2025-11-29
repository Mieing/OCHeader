@class NSDictionary, CJPayNavigationController;
@protocol CJPay3DSVerifyProtocol;

@interface CJPayUnifyVerifyConfig : NSObject

@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) CJPayNavigationController *preCJNavi;
@property (retain, nonatomic) id<CJPay3DSVerifyProtocol> dsVerifyImpl;
@property (copy, nonatomic) id /* block */ loadingBlock;
@property (nonatomic) BOOL completeAlongsideDismiss;
@property (copy, nonatomic) NSDictionary *context;

- (void).cxx_destruct;

@end
