@class MktPaymentChannel, NSString;

@interface BankFavGuideForBindCard : WXPBGeneratedMessage

@property (retain, nonatomic) MktPaymentChannel *paymentChannel;
@property (nonatomic) unsigned int isShowGuide;
@property (retain, nonatomic) NSString *defaultFavCombId;
@property (retain, nonatomic) NSString *guideContent;
@property (retain, nonatomic) NSString *guideContentColor;
@property (retain, nonatomic) NSString *guideBtnText;
@property (retain, nonatomic) NSString *guideBtnTextColor;
@property (retain, nonatomic) NSString *guideBtnBgColor;
@property (retain, nonatomic) NSString *guideLogo;

+ (id)fromDic:(id)a0;
+ (void)initialize;

@end
