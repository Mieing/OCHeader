@class NSString;

@interface AWEProfileUtilities : NSObject <AWEProfileUtilitiesProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)aStrWith:(id)a0 withSuffix:(id)a1 preferFontSize:(unsigned long long)a2 isLoaded:(BOOL)a3 textColor:(id)a4;
+ (id)adaptedDUXShowStringWithFromNumber:(long long)a0;
+ (id)showStringFromNumber:(long long)a0;
+ (id)p_dateFormat;
+ (id)accessibilityLabelForCountString:(id)a0;
+ (id)getUserAge:(id)a0 isOnlyNumber:(BOOL)a1;
+ (id)accessibilityLabelForAvatarWithNickname:(id)a0;
+ (id)colorWithHexARGBString:(id)a0;
+ (id)profileButtonColor;
+ (id)profileButtonColorWithUserModel:(id)a0;
+ (BOOL)shouldProfileButtonsApplySolidStyleWithUserModel:(id)a0;
+ (id)trimmedUserNameWithContext:(id)a0;
+ (id)aStrWithIntro:(id)a0 andSignatureExtra:(id)a1 withOffset:(unsigned long long)a2 isFromOthersProfilePage:(BOOL)a3;
+ (double)signatureLineHeight;
+ (id)isFormatedString:(id)a0;
+ (id)decimalDigitFromString:(id)a0;
+ (void)preRequestCoverImageWithArrayJson:(id)a0;
+ (void)awemeListSplitParse:(id)a0 splitCount:(long long)a1 modelClass:(Class)a2 frontParseComplete:(id /* block */)a3 backParseComplete:(id /* block */)a4;
+ (id)getAwemeListWithArrayJson:(id)a0;


@end
