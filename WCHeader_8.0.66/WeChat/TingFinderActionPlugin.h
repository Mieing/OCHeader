@class NSString;

@interface TingFinderActionPlugin : NSObject <MMFlutterPlugin, TingFinderActionController>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onAttachedToEngine:(id)a0;
- (void)onFinderFeedLikeFeedId:(id)a0 nonceId:(id)a1 actToLike:(BOOL)a2 realName:(BOOL)a3 completion:(id /* block */)a4;
- (id)genAsyncResult:(long long)a0 errMsg:(id)a1;

@end
