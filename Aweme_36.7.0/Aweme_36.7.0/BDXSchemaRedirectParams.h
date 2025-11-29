@class NSString, NSDictionary;

@interface BDXSchemaRedirectParams : NSObject

@property (copy, nonatomic) NSString *entry;
@property (copy, nonatomic) NSString *defaultSchema;
@property (copy, nonatomic) NSDictionary *schemaQueryItems;
@property (copy, nonatomic) NSDictionary *urlQueryItems;

- (void).cxx_destruct;

@end
