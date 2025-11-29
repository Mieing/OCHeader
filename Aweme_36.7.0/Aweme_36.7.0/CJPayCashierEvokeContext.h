@class NSString;
@protocol CJPayCashierEvokeHomePageProtocol;

@interface CJPayCashierEvokeContext : NSObject

@property (copy, nonatomic) NSString *evokeId;
@property (nonatomic) BOOL isNeedForceClose;
@property (nonatomic) long long scene;
@property (nonatomic) double startTimestamp;
@property (retain, nonatomic) id<CJPayCashierEvokeHomePageProtocol> homePageController;
@property (copy, nonatomic) id /* block */ completionBlock;

- (long long)currentCallBackCode;
- (id)currentHomePageVCNavigationController;
- (void).cxx_destruct;
- (BOOL)isValid;
- (id)trackData;

@end
