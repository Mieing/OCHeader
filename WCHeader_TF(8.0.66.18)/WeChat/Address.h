@class NSString;

@interface Address : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *country;
@property (retain, nonatomic) NSString *province;
@property (retain, nonatomic) NSString *city;
@property (retain, nonatomic) NSString *detail;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *tel;
@property (retain, nonatomic) NSString *zipCode;

+ (void)initialize;

@end
