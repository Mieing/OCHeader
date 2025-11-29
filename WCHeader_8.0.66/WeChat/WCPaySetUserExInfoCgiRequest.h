@class NSString, WCPayProfession;

@interface WCPaySetUserExInfoCgiRequest : NSObject

@property (copy, nonatomic) NSString *country;
@property (copy, nonatomic) NSString *province;
@property (copy, nonatomic) NSString *city;
@property (retain, nonatomic) WCPayProfession *profession;
@property (retain, nonatomic) NSString *nationality;

- (void).cxx_destruct;

@end
