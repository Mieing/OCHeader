@class WCPayPhoneTextItem, NSString, UILabel, UIView, WCPayControlData;
@protocol WCPayCountryCodeAndPhoneNumberItemDelegate;

@interface WCPayCountryCodeAndPhoneNumberItem : WCBaseInfoItem <WCBaseInfoItemDelegate>

@property (retain, nonatomic) WCPayPhoneTextItem *phoneTextItem;
@property (retain, nonatomic) WCPayPhoneTextItem *countryCodeTextItem;
@property (retain, nonatomic) UILabel *plusLabel;
@property (retain, nonatomic) UIView *separator;
@property (nonatomic) BOOL bIsAutoFill;
@property (retain, nonatomic) WCPayControlData *data;
@property (weak, nonatomic) id<WCPayCountryCodeAndPhoneNumberItemDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCountryCode:(id)a0;
- (void)setCountryCodeItemIsValid:(BOOL)a0;
- (void)initView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)getValue;
- (void)showDetailTip;
- (void)resignFirstResponder;
- (void)WCBaseInfoItemEditChanged:(id)a0;
- (void)WCBaseInfoItemBeginEdit:(id)a0;
- (void).cxx_destruct;

@end
