@class HTSLiveUser, NSArray, HTSEventContext, NSString;
@protocol IESLiveRoomService, HTSLiveGiftViewReactions;

@interface HTSLiveGiftStore : NSObject <HTSLiveGiftActions, IESLiveWalletAction>

@property (retain, nonatomic) NSArray *giftGroup;
@property (copy, nonatomic) id<IESLiveRoomService> roomModel;
@property (retain, nonatomic) NSArray *giftModels;
@property (weak, nonatomic) id<HTSLiveGiftViewReactions> viewReactions;
@property (nonatomic) BOOL isAnchor;
@property (retain, nonatomic) HTSLiveUser *toUser;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)diamondHasUpdated;
- (id)initWithRoomModel:(id)a0;
- (void).cxx_destruct;
- (void)setup;

@end
