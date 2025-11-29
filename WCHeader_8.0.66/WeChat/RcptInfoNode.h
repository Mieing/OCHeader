@class SKBuiltinString_t;

@interface RcptInfoNode : WXPBGeneratedMessage

@property (nonatomic) unsigned int id;
@property (retain, nonatomic) SKBuiltinString_t *country;
@property (retain, nonatomic) SKBuiltinString_t *province;
@property (retain, nonatomic) SKBuiltinString_t *city;
@property (retain, nonatomic) SKBuiltinString_t *district;
@property (retain, nonatomic) SKBuiltinString_t *zipcode;
@property (retain, nonatomic) SKBuiltinString_t *detail;
@property (retain, nonatomic) SKBuiltinString_t *name;
@property (retain, nonatomic) SKBuiltinString_t *phone;
@property (retain, nonatomic) SKBuiltinString_t *nationalcodeGbt2260;
@property (retain, nonatomic) SKBuiltinString_t *street;
@property (retain, nonatomic) SKBuiltinString_t *countrycode;

+ (void)initialize;

@end
