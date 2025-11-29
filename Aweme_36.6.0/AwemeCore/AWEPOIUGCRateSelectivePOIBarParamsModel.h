@class NSString, NSDictionary;

@interface AWEPOIUGCRateSelectivePOIBarParamsModel : NSObject

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *defaultName;
@property (copy, nonatomic) NSString *defaultId;
@property (copy, nonatomic) NSString *navbarTitle;
@property (copy, nonatomic) NSDictionary *commonRequestParams;
@property (copy, nonatomic) NSDictionary *initialRequestParams;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
