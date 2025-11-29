@class NSString;

@interface AWEVideoRouterIMService : NSObject <AWEStudioIMService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startIMAIEmojiCameraWithRepoIMModel:(id)a0 routerParams:(id)a1 completion:(id /* block */)a2;
- (void)startIMCustomEmojiEditWithFilePathes:(id)a0 didClickConfirm:(id /* block */)a1 completion:(id /* block */)a2;

@end
