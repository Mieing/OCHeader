@class CContact;
@protocol ForwardMessageLogicDelegate;

@interface WCFinderFeedContentVMShareToFriendParams : NSObject

@property (retain, nonatomic) CContact *fastForwardContact;
@property (retain, nonatomic) id<ForwardMessageLogicDelegate> delegate;
@property (nonatomic) long long liveShareSceneIfLive;

- (void).cxx_destruct;

@end
