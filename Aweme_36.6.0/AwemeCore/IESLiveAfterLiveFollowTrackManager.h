@interface IESLiveAfterLiveFollowTrackManager : NSObject

+ (id)shareInstance;

- (void)trackAfterLiveFollowWithUserID:(id)a0 extraParams:(id)a1 completion:(id /* block */)a2;

@end
