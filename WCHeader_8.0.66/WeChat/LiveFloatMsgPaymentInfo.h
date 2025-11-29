@class NSString, NSMutableArray;

@interface LiveFloatMsgPaymentInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *productId;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned long long unitPriceInWecoin;
@property (retain, nonatomic) NSMutableArray *wordColor;
@property (retain, nonatomic) NSMutableArray *frameColor;
@property (nonatomic) unsigned int decorationLevel;
@property (retain, nonatomic) NSMutableArray *decorationInfos;

+ (void)initialize;

@end
