@class NSString;

@interface AFDVideoCutHelper : NSObject <SKStoreProductViewControllerDelegate, AFDVideoCutHelperProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)isVideocutInstalled;
- (id)linkToVideoCutTitle;
- (id)videoCutIconImage;
- (id)videoCutSameMockSDKVersion;
- (void)routerToVideoCuteApplicationURL:(id)a0;
- (id)videoCutItunesItemID;
- (void)getUGLinkTokenFrom:(id)a0 completion:(id /* block */)a1;

@end
