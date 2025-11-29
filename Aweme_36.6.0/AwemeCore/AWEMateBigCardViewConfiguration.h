@interface AWEMateBigCardViewConfiguration : NSObject

+ (id)followButtonTextForFollowStatus:(long long)a0 followerStatus:(long long)a1;
+ (id)cancelButtonText:(BOOL)a0;
+ (id)followButtonTitleColorForFollowStatus:(long long)a0;
+ (id)followButtonBackgroundColorForFollowStatus:(long long)a0;
+ (id)cancelButtonTitleColor:(BOOL)a0;
+ (id)cancelButtonBackgroundColor:(BOOL)a0;
+ (id)addMateButtonText;
+ (id)addMateButtonTitleColor;
+ (id)addMateButtonBackgroundColor;
+ (id)bottomSwipeGuideText;
+ (id)buttonText:(id)a0 defaultValue:(id)a1;
+ (id)buttonColor:(id)a0 defaultValue:(id)a1;
+ (id)getColorStringFromHexString:(id)a0;

@end
