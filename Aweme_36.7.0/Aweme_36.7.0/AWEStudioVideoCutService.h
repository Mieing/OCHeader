@class NSString;

@interface AWEStudioVideoCutService : NSObject <AWEStudioVideoCutService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)enterFrom;
- (BOOL)isVideocutInstalled;
- (id)anchorZlinkFor:(BOOL)a0;
- (void)tryOpenVideoCutWithSchema:(id)a0 awemeID:(id)a1 zlink:(id)a2 tokenURL:(id)a3 tokenCert:(id)a4 useNewAttri:(BOOL)a5;
- (id)videoCutSameMockSDKVersion;
- (void)routerToVideoCuteApplicationURL:(id)a0;
- (void)trackVideoCutDownLoadForAwemeID:(id)a0 zlink:(id)a1;
- (id)getShareTokenFrom:(id)a0;
- (void)presentVideoCutStorePageIn:(id)a0;
- (void)trackVideoCutDownLoadForAwemeID:(id)a0 isTemplate:(BOOL)a1;

@end
