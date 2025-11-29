@class FinderLiveBattleInfo, FinderLivePurchaseMicConfig, IntercomMicInfo, FinderLiveMicInfo_Wording, FinderJumpInfo, NSMutableArray, FinderLiveMicConfig, FinderLiveContact, NSString, FinderLiveRoomData, FinderLiveBattleSettingInfo, FinderLiveNewPkInfo, FinderLiveMicMeetInfo, FinderLiveMicPkInfo;

@interface FinderLiveMicInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *liveMicId;
@property (nonatomic) unsigned int micType;
@property (retain, nonatomic) FinderLiveContact *applyContact;
@property (retain, nonatomic) FinderLiveContact *acceptLiveContact;
@property (nonatomic) unsigned int status;
@property (retain, nonatomic) FinderLiveRoomData *micLiveRoomData;
@property (retain, nonatomic) NSMutableArray *micAudienceList;
@property (retain, nonatomic) FinderLiveMicPkInfo *micPkInfo;
@property (retain, nonatomic) FinderLiveBattleInfo *battleInfo;
@property (nonatomic) BOOL enableCrossLiveRoomMic;
@property (retain, nonatomic) IntercomMicInfo *boxIntercomMicInfo;
@property (retain, nonatomic) FinderLiveMicInfo_Wording *wording;
@property (retain, nonatomic) FinderLiveMicMeetInfo *meetInfo;
@property (retain, nonatomic) NSMutableArray *newPkMicInfos;
@property (retain, nonatomic) FinderLiveNewPkInfo *anchorNewPkInfo;
@property (retain, nonatomic) FinderLiveBattleSettingInfo *battleSettingInfo;
@property (retain, nonatomic) FinderLiveMicConfig *micConfig;
@property (retain, nonatomic) NSMutableArray *newPkMicInfosForBoard;
@property (retain, nonatomic) FinderLivePurchaseMicConfig *purchaseMicConfig;
@property (nonatomic) double anchorPurchaseEvaluateRate;
@property (retain, nonatomic) FinderJumpInfo *anchorPurchaseHistoryEntrance;
@property (retain, nonatomic) NSString *canceledPurchaseLiveMicId;
@property (retain, nonatomic) FinderJumpInfo *anchorPurchaseEvaluateEntrance;

+ (void)initialize;

- (void)setAnchorPurchaseEvaluateEntrance:(id)a0;
- (id)anchorPurchaseEvaluateEntrance;
- (void)setCanceledPurchaseLiveMicId:(id)a0;
- (id)canceledPurchaseLiveMicId;
- (void)setAnchorPurchaseHistoryEntrance:(id)a0;
- (id)anchorPurchaseHistoryEntrance;
- (void)setAnchorPurchaseEvaluateRate:(double)a0;
- (double)anchorPurchaseEvaluateRate;
- (void)setPurchaseMicConfig:(id)a0;
- (id)purchaseMicConfig;
- (void)setNewPkMicInfosForBoard:(id)a0;
- (id)newPkMicInfosForBoard;
- (void)setMicConfig:(id)a0;
- (id)micConfig;
- (void)setBattleSettingInfo:(id)a0;
- (id)battleSettingInfo;
- (void)setAnchorNewPkInfo:(id)a0;
- (id)anchorNewPkInfo;
- (void)setNewPkMicInfos:(id)a0;
- (id)newPkMicInfos;
- (void)setMeetInfo:(id)a0;
- (id)meetInfo;
- (void)setWording:(id)a0;
- (id)wording;
- (void)setBoxIntercomMicInfo:(id)a0;
- (id)boxIntercomMicInfo;
- (void)setEnableCrossLiveRoomMic:(BOOL)a0;
- (BOOL)enableCrossLiveRoomMic;
- (void)setBattleInfo:(id)a0;
- (id)battleInfo;
- (void)setMicPkInfo:(id)a0;
- (id)micPkInfo;
- (void)setMicAudienceList:(id)a0;
- (id)micAudienceList;
- (void)setMicLiveRoomData:(id)a0;
- (id)micLiveRoomData;
- (void)setStatus:(unsigned int)a0;
- (unsigned int)status;
- (void)setAcceptLiveContact:(id)a0;
- (id)acceptLiveContact;
- (void)setApplyContact:(id)a0;
- (id)applyContact;
- (void)setMicType:(unsigned int)a0;
- (unsigned int)micType;
- (void)setLiveMicId:(id)a0;
- (id)liveMicId;

@end
