@class NSString, NSDictionary;

@interface FurionFactorQuery : NSObject

@property (retain, nonatomic) NSString *factorName;
@property (retain, nonatomic) NSString *subFactorName;
@property (retain, nonatomic) NSString *insKeyName;
@property (retain, nonatomic) NSDictionary *extParams;
@property (nonatomic) unsigned long long qType;
@property (nonatomic) unsigned long long rType;
@property (nonatomic) unsigned long long n;

- (void).cxx_destruct;

@end
