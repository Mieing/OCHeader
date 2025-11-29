@class NSObject, NSString, RTVFeedSharingInfo, RTVEffectGameResponseData, NSNumber, RTVRoomTextChatInfo;
@protocol RTVXRInteractionModelProtocol;

@interface RTVRoomBusinessModel : NSObject

@property (nonatomic) BOOL isFeedSharing;
@property (copy, nonatomic) NSString *sessionID;
@property (retain, nonatomic) RTVFeedSharingInfo *sharingInfo;
@property (retain, nonatomic) RTVRoomTextChatInfo *textChatInfo;
@property (retain, nonatomic) RTVEffectGameResponseData *effectGameInfo;
@property (retain, nonatomic) NSNumber *localIsFeedSharing;
@property (retain, nonatomic) NSNumber *localIsEffectGame;
@property (retain, nonatomic) NSObject<RTVXRInteractionModelProtocol> *interactionModel;
@property (readonly, nonatomic) long long businessAction;

- (void)updateEffectGameInfo:(id)a0;
- (void)updateInteractionModel:(id)a0;
- (void)__refreshInteractionModelIfNeed;
- (void)__updateInteractionModel:(id)a0;
- (id)initWithSessionID:(id)a0 initialAction:(long long)a1;
- (id)initWithBusinessInfo:(id)a0;
- (void)clearInteractionModel:(id)a0;
- (void)mergeWithBusinessModel:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
