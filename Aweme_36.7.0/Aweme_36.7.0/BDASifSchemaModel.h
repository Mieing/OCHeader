@class NSString, NSDictionary;

@interface BDASifSchemaModel : NSObject

@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *bundle;
@property (copy, nonatomic) NSString *surl;
@property (copy, nonatomic) NSDictionary *queryItems;
@property (copy, nonatomic) NSString *originURLString;

- (void).cxx_destruct;

@end
