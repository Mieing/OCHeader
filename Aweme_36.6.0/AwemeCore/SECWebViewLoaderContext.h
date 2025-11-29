@class NSString, SECHybridPageContext, NSData, NSURL, NSURLRequest;

@interface SECWebViewLoaderContext : NSObject

@property (retain, nonatomic) NSURLRequest *request;
@property (retain, nonatomic) NSData *data;
@property (copy, nonatomic) NSString *MIMEType;
@property (copy, nonatomic) NSString *characterEncodingName;
@property (retain, nonatomic) NSURL *baseURL;
@property (retain, nonatomic) NSURL *readAccessURL;
@property (retain, nonatomic) NSString *loaderSEL;
@property (readonly, copy, nonatomic) NSURL *URL;
@property (retain, nonatomic) SECHybridPageContext *pageContext;

- (void).cxx_destruct;

@end
