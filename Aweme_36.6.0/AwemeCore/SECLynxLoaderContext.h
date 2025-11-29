@class NSString, LynxTemplateData, NSData;

@interface SECLynxLoaderContext : NSObject

@property (copy, nonatomic) NSString *url;
@property (retain, nonatomic) LynxTemplateData *initialData;
@property (retain, nonatomic) NSData *templateData;
@property (copy, nonatomic) NSString *loaderSEL;

- (void).cxx_destruct;

@end
