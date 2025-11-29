@class NSString, NSObject;
@protocol FlutterBinaryMessenger;

@interface MegaVideoFinderCallback : NSObject

@property (retain, nonatomic) NSObject<FlutterBinaryMessenger> *binaryMessenger;
@property (retain, nonatomic) NSString *messageChannelSuffix;

- (id)initWithBinaryMessenger:(id)a0;
- (id)initWithBinaryMessenger:(id)a0 messageChannelSuffix:(id)a1;
- (void)onThumbFavStatusChangedFeedId:(id)a0 isFav:(BOOL)a1 completion:(id /* block */)a2;
- (void)onHeartLikeStatusChangedFeedId:(id)a0 isLike:(BOOL)a1 completion:(id /* block */)a2;
- (void)onFollowStatusChangedUsername:(id)a0 isFollow:(BOOL)a1 completion:(id /* block */)a2;
- (void)onSeeLaterStatusChangedFeedId:(id)a0 seeLater:(BOOL)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
