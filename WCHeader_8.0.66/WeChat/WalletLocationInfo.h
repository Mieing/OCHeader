@class NSString;

@interface WalletLocationInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *province;
@property (retain, nonatomic) NSString *city;
@property (retain, nonatomic) NSString *district;

+ (void)initialize;

@end
