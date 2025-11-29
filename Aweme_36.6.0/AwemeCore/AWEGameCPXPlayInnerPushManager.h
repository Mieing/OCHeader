@class NSString;

@interface AWEGameCPXPlayInnerPushManager : NSObject <IESGCPXPlayGameInnerPushService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showPushIfNeeded:(id)a0 completion:(id /* block */)a1;
- (void)queueDidFinishPush:(id)a0 completion:(id /* block */)a1;

@end
