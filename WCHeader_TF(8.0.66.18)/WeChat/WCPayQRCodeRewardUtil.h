@interface WCPayQRCodeRewardUtil : NSObject

+ (BOOL)isAmountCanDisplayAsShort:(long long)a0;
+ (BOOL)handleRewardDescTextView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
+ (void)handleRewardDescTextViewDidChange:(id)a0;

@end
