@class UIImage, NSAttributedString, NSString;

@interface AWEHPPinTopUIMallCouponModel : NSObject <AWEHPPinTopBusinessUIConfigProtocol>

@property (nonatomic) long long amountValue;
@property (retain, nonatomic) UIImage *bgImage;
@property (copy, nonatomic) NSAttributedString *amount;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isValid;

@end
