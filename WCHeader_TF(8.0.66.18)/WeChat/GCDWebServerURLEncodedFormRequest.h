@class NSDictionary;

@interface GCDWebServerURLEncodedFormRequest : GCDWebServerDataRequest

@property (readonly, nonatomic) NSDictionary *arguments;

+ (id)mimeType;

- (BOOL)close:(id *)a0;
- (id)description;
- (void).cxx_destruct;

@end
