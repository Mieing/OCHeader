@class NSString, StandardMoney;

@interface IESLiveWalletDiscountInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) StandardMoney *price;
@property (nonatomic) BOOL hasPrice;

+ (id)descriptor;

@end
