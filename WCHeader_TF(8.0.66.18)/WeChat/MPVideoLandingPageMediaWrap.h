@class NSString;

@interface MPVideoLandingPageMediaWrap : WCPlayerHttpMediaWrap

@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *identifier;

- (id)getMediaWrapIdentifier;
- (id)getMediaWrapUrl;
- (id)initWithUrl:(id)a0;
- (BOOL)isLIFOPreloadTask;
- (void).cxx_destruct;

@end
