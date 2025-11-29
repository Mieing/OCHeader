@class NSNumber, NSString;
@protocol IESLiveRoomService;

@interface IESLiveAudienceWatchInfoServiceImpl : NSObject <IESLiveRoomWatchTimeDelegate, HTSLiveDiggAction, HTSLiveSendGiftActions, IESLiveAudienceWatchInfoService>

@property (nonatomic) long long watchDuration;
@property (nonatomic) long long likeCount;
@property (nonatomic) long long commentCount;
@property (nonatomic) long long giftCount;
@property (nonatomic) double giftValue;
@property (nonatomic) long long followCount;
@property (nonatomic) long long unfollowCount;
@property (nonatomic) long long position;
@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)didGiveGiftWithResponse:(id)a0;
- (id)initWithRoomModel:(id)a0;
- (void)liveRoomWatchMinitTick:(unsigned long long)a0;
- (id)convertToDict;
- (void)addCommentCount:(long long)a0;
- (void)diggUploaded:(long long)a0;
- (void)subscribeFollowStatusChanged;
- (void)didFollowUser:(id)a0;
- (void)didUnfollowUser:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)dealloc;

@end
