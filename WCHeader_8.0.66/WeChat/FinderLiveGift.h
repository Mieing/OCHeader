@class NSData, NSString, FinderLiveGiftBatchGiveConfigList, FinderLiveGift_ForegroundInfo, FinderJumpInfo, AnchorSwitchSkinInfo, NSMutableArray, CustomGiftInfo, FinderLiveGift_SwitchSkinInfo;

@interface FinderLiveGift : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *rewardProductId;
@property (nonatomic) unsigned int businessType;
@property (retain, nonatomic) NSString *thumbnailFileUrl;
@property (retain, nonatomic) NSString *previewPagUrl;
@property (retain, nonatomic) NSString *animationPagUrl;
@property (retain, nonatomic) NSString *thumbnailFileMd5;
@property (retain, nonatomic) NSString *previewPagMd5;
@property (retain, nonatomic) NSString *animationPagMd5;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) float price;
@property (nonatomic) unsigned int giftType;
@property (nonatomic) unsigned int unlockIntimacyLevel;
@property (nonatomic) unsigned int flag;
@property (retain, nonatomic) NSString *landscapeAnimationPagUrl;
@property (retain, nonatomic) NSString *landscapeAnimationPagMd5;
@property (retain, nonatomic) NSData *customInfo;
@property (nonatomic) unsigned int unlockGlobalRewardLevel;
@property (retain, nonatomic) NSString *tagColor;
@property (retain, nonatomic) NSString *tagText;
@property (retain, nonatomic) NSString *interactiveGiftUrl;
@property (retain, nonatomic) NSString *interactiveGiftMd5;
@property (nonatomic) unsigned long long durationTime;
@property (retain, nonatomic) FinderLiveGiftBatchGiveConfigList *batchGiveConfigList;
@property (retain, nonatomic) NSString *description;
@property (retain, nonatomic) FinderJumpInfo *jumpInfo;
@property (nonatomic) BOOL needUnlock;
@property (nonatomic) BOOL disableCombo;
@property (retain, nonatomic) NSMutableArray *multiAnimationList;
@property (retain, nonatomic) FinderLiveGift_SwitchSkinInfo *switchSkinInfo;
@property (retain, nonatomic) CustomGiftInfo *customGiftInfo;
@property (nonatomic) unsigned int freeGiftSeq;
@property (retain, nonatomic) FinderLiveGift_ForegroundInfo *foregroundInfo;
@property (nonatomic) BOOL useRfxPag;
@property (retain, nonatomic) AnchorSwitchSkinInfo *anchorSwitchSkinInfo;

+ (void)initialize;

@end
