@interface AWEIMTextUtils : NSObject

+ (void)linkHighlightTapped:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 message:(id)a2 atView:(id)a3;
+ (void)linkTappedWithContent:(id)a0;
+ (id)textLayoutForQuoteReplyMessage:(id)a0;
+ (id)textLayoutForText:(id)a0 template:(id)a1 atView:(id)a2;
+ (void)linkHighlightCompanyTapped:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 message:(id)a2 conversation:(id)a3 atView:(id)a4;
+ (id)textLayoutForText:(id)a0 atView:(id)a1;
+ (void)linkHighlightTapped:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 message:(id)a2 atView:(id)a3 btmToken:(id)a4;
+ (id)textLayoutForText:(id)a0 font:(id)a1 atView:(id)a2;
+ (void)linkHighlightCompanyTapped:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 message:(id)a2 atView:(id)a3;

@end
