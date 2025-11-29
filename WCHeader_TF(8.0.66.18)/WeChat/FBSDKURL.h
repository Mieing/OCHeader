@class NSURL, NSDictionary, FBSDKAppLink;

@interface FBSDKURL : NSObject

@property (readonly, nonatomic) NSURL *targetURL;
@property (readonly, nonatomic) NSDictionary *targetQueryParameters;
@property (readonly, nonatomic) NSDictionary *appLinkData;
@property (readonly, nonatomic) NSDictionary *appLinkExtras;
@property (readonly, nonatomic) FBSDKAppLink *appLinkReferer;
@property (readonly, nonatomic) NSURL *inputURL;
@property (readonly, nonatomic) NSDictionary *inputQueryParameters;

+ (id)URLWithURL:(id)a0;
+ (id)URLWithInboundURL:(id)a0 sourceApplication:(id)a1;
+ (id)URLForRenderBackToReferrerBarURL:(id)a0;
+ (id)decodeURLString:(id)a0;
+ (id)queryParametersForURL:(id)a0;

- (id)initWithURL:(id)a0 forOpenInboundURL:(BOOL)a1 sourceApplication:(id)a2 forRenderBackToReferrerBar:(BOOL)a3;
- (void).cxx_destruct;

@end
