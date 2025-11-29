@class NSString;

@interface BFWebViewAppLinkResolver : NSObject <BFAppLinkResolving>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)followRedirects:(id)a0;
- (id)appLinkFromALData:(id)a0 destination:(id)a1;
- (void)getALDataFromLoadedPage:(id)a0 completion:(id /* block */)a1;
- (id)parseALData:(id)a0;
- (id)appLinkFromURLInBackground:(id)a0;

@end
