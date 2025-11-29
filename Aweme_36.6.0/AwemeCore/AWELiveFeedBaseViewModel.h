@class AWELiveStreamURLModel;

@interface AWELiveFeedBaseViewModel : NSObject

@property (copy, nonatomic) id /* block */ referStringGetter;
@property (copy, nonatomic) id /* block */ aweModelGetter;
@property (readonly, nonatomic) AWELiveStreamURLModel *curStream;

+ (id)endedRoomIDs;

- (id)referString;
- (BOOL)isFromHomepageHot;
- (id)currentUserId;
- (BOOL)isFollow;
- (id)aweModel;
- (id)liveRoomRawData;
- (long long)feedSource;
- (BOOL)isFromHomepageFresh;
- (BOOL)isFromHomepageFollow;
- (BOOL)isFromHomepageFamiliar;
- (id)rawRoomModel;
- (id)initWithReferString:(id /* block */)a0 aweModel:(id /* block */)a1;
- (id)currentSecUserId;
- (id)currentPlayerURL;
- (id)currentPlayerStreamData;
- (id)currentPlayerSDKKey;
- (id)avatarImageURLArray;
- (BOOL)isLiveEnded;
- (void)setLiveDidEnd;
- (id)roomId;
- (void).cxx_destruct;

@end
