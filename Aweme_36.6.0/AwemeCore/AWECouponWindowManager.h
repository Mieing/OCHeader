@class UIWindow, NSString, AWEPOICouponView, AWECouponWindow;

@interface AWECouponWindowManager : NSObject <AWEPOICouponProtocol>

@property (retain, nonatomic) AWEPOICouponView *couponView;
@property (weak, nonatomic) UIWindow *lastWindow;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) AWECouponWindow *couponWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

@end
