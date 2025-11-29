@class NSString, NSArray;

@interface BTDALModel : NSObject <NSCoding>

@property (copy, nonatomic) NSString *cid;
@property (copy, nonatomic) NSString *logExtra;
@property (copy, nonatomic) NSString *openUrl;
@property (nonatomic) BOOL isAd;
@property (copy, nonatomic) NSArray *enterpriseSchemes;

- (void).cxx_destruct;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
