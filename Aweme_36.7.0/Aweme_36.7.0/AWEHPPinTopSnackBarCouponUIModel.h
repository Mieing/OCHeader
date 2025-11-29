@class NSArray, UIImage, NSString;

@interface AWEHPPinTopSnackBarCouponUIModel : NSObject <AWEHPPinTopBusinessUIConfigProtocol>

@property (retain, nonatomic) NSArray *imageURL;
@property (retain, nonatomic) UIImage *backgroundImage;
@property (retain, nonatomic) UIImage *amountIconImage;
@property (nonatomic) long long amount;
@property (copy, nonatomic) NSString *couponDesc;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL shouldShowCouponView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isValid;

@end
