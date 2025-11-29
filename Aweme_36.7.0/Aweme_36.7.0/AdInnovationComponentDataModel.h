@class NSString, NSDictionary;

@interface AdInnovationComponentDataModel : NSObject

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSDictionary *data;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
