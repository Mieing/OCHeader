@class NSNumber, NSString;

@interface AWEEupfContentISPConfig : NSObject

@property (retain, nonatomic) NSNumber *isp;
@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSString *cname;

+ (id)configWithDictionary:(id)a0;

- (void).cxx_destruct;

@end
