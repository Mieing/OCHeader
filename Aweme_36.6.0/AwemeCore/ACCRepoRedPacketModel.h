@class NSString, ACCFlowerRedPacketInfo, NSDictionary;

@interface ACCRepoRedPacketModel : NSObject <AWERepositoryDraftProtocol, ACCRepoRegister, NSCopying, ACCRepositoryRequestParamsDeprecated, ACCRepositoryTrackContextDeprecated, AWERepoRedPacketData>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) ACCFlowerRedPacketInfo *redPacketInfo;
@property (copy, nonatomic) NSString *routerCouponId;
@property (nonatomic) BOOL didClearedRedpacketInfoOnce;
@property (nonatomic, getter=isAnswerQuestionSticker) BOOL answerQuestionSticker;
@property (nonatomic) BOOL needHandleRebuildCreationIDFlag;
@property (nonatomic) BOOL trackIsClickRedPackets;
@property (nonatomic) BOOL skipRedpacketCheckWhenBackupPublishFlag;
@property (nonatomic) BOOL shouldShowBarItem;
@property (nonatomic) unsigned long long redPacketBusinessType;
@property (copy, nonatomic) NSDictionary *redPacketExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)repo_dataProtocol;

- (id)acc_publishRequestParams:(id)a0;
- (id)initWithDraft:(id)a0;
- (void)saveWithDraft:(id)a0;
- (BOOL)didSendAnyRedpacket;
- (id)acc_publishTrackEventParams:(id)a0;
- (BOOL)didBindRedpacketInfo;
- (void)rebuildCreationID;
- (BOOL)isBindCashRedpacketInfo;
- (BOOL)isBindCouponRedpacketInfo;
- (void)clearRedPacketInfo;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)trackInfo;

@end
