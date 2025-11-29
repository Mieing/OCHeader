@class NSString;

@interface SchemaInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *schemaURL;

+ (id)descriptor;

@end
