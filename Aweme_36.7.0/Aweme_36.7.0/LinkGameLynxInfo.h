@class NSString;

@interface LinkGameLynxInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *titleSchemaURL;
@property (copy, nonatomic) NSString *quickSchemaURL;
@property (nonatomic) long long rotation;

+ (id)descriptor;

@end
