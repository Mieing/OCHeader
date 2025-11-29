@interface IESLiveLGameMessageImpl : NSObject

@property (nonatomic) BOOL isAnchor;

- (void)app:(id)a0 didReceiveMessage:(id)a1 callback:(id /* block */)a2;
- (void)childHandleMethodGetLiveSetting:(id)a0 callback:(id /* block */)a1;
- (void)childHandleMethodSyncGameProgress:(id)a0 callback:(id /* block */)a1;
- (void)childHandleMethodUploadGameProgress:(id)a0 callback:(id /* block */)a1;
- (void)handleMethodGetLiveSetting:(id)a0 callback:(id /* block */)a1;
- (void)handleMethodUploadGameProgress:(id)a0 callback:(id /* block */)a1;
- (void)handleMethodSyncGameProgress:(id)a0 callback:(id /* block */)a1;

@end
