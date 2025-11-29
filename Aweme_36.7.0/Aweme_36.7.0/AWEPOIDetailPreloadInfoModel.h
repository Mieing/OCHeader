@class NSString, NSDictionary;

@interface AWEPOIDetailPreloadInfoModel : NSObject

@property (nonatomic) BOOL hasPreloaded;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *method;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *bizCode;
@property (copy, nonatomic) NSDictionary *config;

- (void)updateSchema:(id)a0;
- (void).cxx_destruct;

@end
