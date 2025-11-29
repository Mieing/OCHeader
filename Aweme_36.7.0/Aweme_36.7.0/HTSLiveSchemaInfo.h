@class NSString;

@interface HTSLiveSchemaInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *schemaURL;

+ (id)descriptor;

@end
