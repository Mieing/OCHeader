@class NSString;

@interface BDAddress : NSObject

@property (retain, nonatomic) NSString *street;
@property (retain, nonatomic) NSString *city;
@property (retain, nonatomic) NSString *state;
@property (retain, nonatomic) NSString *zip;
@property (retain, nonatomic) NSString *country;
@property (retain, nonatomic) NSString *countryCode;
@property (retain, nonatomic) NSString *originalLabel;
@property (retain, nonatomic) NSString *localizedLabel;

- (void).cxx_destruct;

@end
