@class NSString, NSObject;
@protocol FlutterBinaryMessenger;

@interface TingFlutterPlayController : NSObject

@property (retain, nonatomic) NSObject<FlutterBinaryMessenger> *binaryMessenger;
@property (retain, nonatomic) NSString *messageChannelSuffix;

- (id)initWithBinaryMessenger:(id)a0;
- (id)initWithBinaryMessenger:(id)a0 messageChannelSuffix:(id)a1;
- (void)playTingItemData:(id)a0 itemExt:(id)a1 completion:(id /* block */)a2;
- (void)playListTingItemsData:(id)a0 itemExt:(id)a1 completion:(id /* block */)a2;
- (void)onNativeLikeOpListenId:(id)a0 isLike:(BOOL)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
