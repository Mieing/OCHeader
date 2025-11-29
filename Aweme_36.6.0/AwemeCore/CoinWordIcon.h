@class NSString;

@interface CoinWordIcon : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *icon;
@property (copy, nonatomic) NSString *btnText;
@property (copy, nonatomic) NSString *img;
@property (copy, nonatomic) NSString *btnClickText;

+ (id)descriptor;

@end
