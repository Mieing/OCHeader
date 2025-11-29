@class NSDictionary, NSString, UIViewController;

@interface IESECBuyNowRequest : NSObject

@property (copy, nonatomic) NSDictionary *inputParams;
@property (retain, nonatomic) NSString *sessionID;
@property (weak, nonatomic) UIViewController *sourceVC;
@property (copy, nonatomic) id /* block */ completion;

- (double)maskAlpha;
- (BOOL)asChildVC;
- (BOOL)isAuction;
- (BOOL)useNewSelfEvent;
- (BOOL)isHalfPanel;
- (BOOL)isOnlyPayMethod;
- (BOOL)isRefull;
- (BOOL)isOnlyMethodWithCloseEvent;
- (BOOL)unJumpToSuccessPage;
- (BOOL)isZeroBuy;
- (double)halfPanelHeight;
- (BOOL)enableMaskClickClose;
- (void).cxx_destruct;

@end
