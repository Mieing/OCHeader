@interface AWEIMMessageUIAB : NSObject

+ (BOOL)shouldShowNicknameWithMessage:(id)a0;
+ (id)imBubbleGrandientImage;
+ (BOOL)bothEnableNewQuoteStyle;
+ (long long)enableStaticCoverCardStyle;
+ (BOOL)enableShareContactListUIOpt;
+ (BOOL)enableShareContactListDoubleSend;
+ (BOOL)enableShareContactListFixedHigher;
+ (id)createBubbleGrandientImageWithStartColor:(id)a0 endColor:(id)a1;
+ (BOOL)enableMessageLongVideoCardOpt;
+ (BOOL)enablehareContactListAdjustBigFont;
+ (id)p_lightImage;
+ (id)p_darkImage;
+ (void)gradientColorForDark:(BOOL)a0 startColor:(id *)a1 endColor:(id *)a2;
+ (unsigned long long)shareContactListOptStrategy;

@end
