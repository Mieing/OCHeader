@class NSString, NSDictionary;

@interface LMTSchemaModel : NSObject

@property (copy, nonatomic) NSString *protocol;
@property (copy, nonatomic) NSString *path;
@property (retain, nonatomic) NSDictionary *query;

+ (id)schemaModelWithURL:(id)a0;

- (void).cxx_destruct;

@end
