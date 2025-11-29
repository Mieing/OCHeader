@class NSString;

@interface AWEAIGCBusinessTemplateResourceModel : NSObject

@property (nonatomic) long long resourceType;
@property (copy, nonatomic) NSString *fileFormat;
@property (copy, nonatomic) NSString *resourceUri;
@property (copy, nonatomic) NSString *resourceUrl;
@property (copy, nonatomic) NSString *resourcePath;
@property (copy, nonatomic) NSString *generatedText;

- (void)configFileFormat:(id)a0 defaultValue:(id)a1;
- (void).cxx_destruct;

@end
