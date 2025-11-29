@class NSString, NSArray, MMFinderLiveNewCustomGiftItemResourceURL, GiftNewCustomizationMagicRewardResource, MMFinderLiveNewCustomGiftText;

@interface MMFinderLiveGiftNewCustomizationModel : NSObject <NSCopying>

@property (retain, nonatomic) NSString *parentProductId;
@property (retain, nonatomic) NSArray *giftComponentList;
@property (retain, nonatomic) MMFinderLiveNewCustomGiftText *customGiftText;
@property (retain, nonatomic) NSArray *resourceList;
@property (retain, nonatomic) MMFinderLiveNewCustomGiftItemResourceURL *backupThumbnail;
@property (retain, nonatomic) MMFinderLiveNewCustomGiftItemResourceURL *backupPreview;
@property (retain, nonatomic) MMFinderLiveNewCustomGiftItemResourceURL *backupAnimation;
@property (retain, nonatomic) MMFinderLiveNewCustomGiftItemResourceURL *backupLandscapeAnimation;
@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) MMFinderLiveNewCustomGiftItemResourceURL *engine;
@property (retain, nonatomic) NSString *minCodeVersion;
@property (nonatomic) BOOL hasCustomized;
@property (retain, nonatomic) GiftNewCustomizationMagicRewardResource *magicRewardResource;
@property (retain, nonatomic) NSString *currCombinationIdentifier;
@property (nonatomic) BOOL isOnceModified;
@property (nonatomic) BOOL isEngineDisabled;
@property (nonatomic) double baseRewardAmount;
@property (copy, nonatomic) id /* block */ currComponentKeyUpdateCallback;
@property (copy, nonatomic) id /* block */ displayTextUpdateCallback;

+ (id)newCustomizationModelForFinderLiveGift:(id)a0;
+ (BOOL)isNewCustomizationGift:(id)a0;
+ (BOOL)isCustomGiftInfoValid:(id)a0;

- (void)innerInit;
- (id)getSelectStyleGeneralResource;
- (double)getAllSumBeanCnt;
- (double)getSumBeanCntForCurrentSelect;
- (double)getSumBeanCntForCurrentDisplayText;
- (BOOL)hasAntispamCustomTextToDisplay;
- (BOOL)astrictBySystem;
- (void)configListenerCallbacks;
- (void)updateSelectComponentCombinationIdentifier;
- (id)getSeqSortedComponentList;
- (void)updateDisplayText:(id)a0 customGiftText:(id)a1;
- (BOOL)enableUseCustomText;
- (id)getFirstConflictSelectedComponentWithCustomText;
- (BOOL)enableUseMagicEngineToPlayEffect;
- (BOOL)enableUseMagicEngineToPlayEffectSendByMe:(BOOL)a0;
- (BOOL)isCurrentSelectStyleNeedUsePag;
- (BOOL)isSelectModifyCustomizationConfigOnce;
- (BOOL)isCurrentSelectUnEqualToCustomizationConfig;
- (void)synchronizeCurrentSelectToCustomizationConfig;
- (void)recoverCurrentSelectFromCustomizationConfig;
- (void)updateHasCustomized:(BOOL)a0;
- (void)updateAntispamCustomText:(id)a0;
- (void)updateEngineDisabled:(BOOL)a0;
- (BOOL)useBackupAnimationPagResource;
- (BOOL)isEngineDisabledForReward;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
