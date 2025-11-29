@class NSString, NSDictionary;

@interface BDPImageModel : BDPBasePluginModel

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *originURL;
@property (copy, nonatomic) NSString *placeholderURL;
@property (copy, nonatomic) NSDictionary *allHTTPHeaderFields;

- (void).cxx_destruct;

@end
