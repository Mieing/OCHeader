@class NSString;

@interface VcardAddress : NSObject

@property (retain, nonatomic) NSString *postOfficeBox;
@property (retain, nonatomic) NSString *extendedAddress;
@property (retain, nonatomic) NSString *street;
@property (retain, nonatomic) NSString *locality;
@property (retain, nonatomic) NSString *region;
@property (retain, nonatomic) NSString *postalCode;
@property (retain, nonatomic) NSString *country;

+ (BOOL)isValidAddress:(id)a0;
+ (BOOL)isChineseAddress:(id)a0;

- (void)print;
- (void).cxx_destruct;

@end
