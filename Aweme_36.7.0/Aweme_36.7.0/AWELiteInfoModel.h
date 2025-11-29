@class NSString, AWELiteButtonModel, AWELiteShareFeedFissionModel, AWELiteGoldLikeModel;

@interface AWELiteInfoModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL luckycat_isFinishedCreateVideoTask;
@property (nonatomic) BOOL luckycat_forbidShowGoldShareToIMTask;
@property (nonatomic) BOOL isLiteRedPackItem;
@property (nonatomic) BOOL canDoneSharePrivateChatTask;
@property (nonatomic) unsigned long long redPacketUserStatus;
@property (nonatomic) BOOL canShowSendGoldCoinElement;
@property (nonatomic) BOOL canShowSendGoldCoinTab;
@property (copy, nonatomic) NSString *taskToken;
@property (copy, nonatomic) NSString *socialLibraInfo;
@property (nonatomic) BOOL hasInteractionGiftTab;
@property (nonatomic) BOOL showInteractionGiftTab;
@property (retain, nonatomic) AWELiteButtonModel *buttonModel;
@property (retain, nonatomic) AWELiteButtonModel *musicCoverInfo;
@property (nonatomic) BOOL showCoinTab;
@property (copy, nonatomic) NSString *coinTabSource;
@property (retain, nonatomic) AWELiteGoldLikeModel *goldLike;
@property (nonatomic) BOOL isLiteCommentInspireA;
@property (retain, nonatomic) AWELiteShareFeedFissionModel *feedFission;
@property (nonatomic) BOOL isNewChallengeTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buttonJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)shouldShowShootSingleMusic;
- (void).cxx_destruct;

@end
