@class NSString;

@interface AWEVideoCoverReeditService : NSObject <AWEStudioEditVideoCoverService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showCoverEvaluatePanel:(id)a0 fromPage:(long long)a1 delegate:(id)a2 completion:(id /* block */)a3;
- (void)showCoverEditor:(id)a0 onLynxVC:(id)a1 enterFrom:(id)a2;

@end
