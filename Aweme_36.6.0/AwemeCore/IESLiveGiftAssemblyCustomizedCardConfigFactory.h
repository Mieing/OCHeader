@class HTSLiveDIYGiftToolbarInfo, NSString, NSArray, NSNumber;

@interface IESLiveGiftAssemblyCustomizedCardConfigFactory : NSObject

@property (retain, nonatomic) HTSLiveDIYGiftToolbarInfo *giftAssemblyInfo;
@property (retain, nonatomic) NSNumber *giftId;
@property (copy, nonatomic) NSString *preSelectCardName;
@property (copy, nonatomic) NSArray *officialCardConfigs;
@property (copy, nonatomic) NSArray *forceIndexOfficialCardConfigs;
@property (nonatomic) BOOL preSelectCardIsUnlocked;
@property (copy, nonatomic) NSString *toUserId;
@property (nonatomic) BOOL useLynxDIYCard;

- (void)p_saveCustomizedCardsToCacheWithConfigList:(id)a0;
- (id)p_conflictCheckWithCachedCards:(id)a0 officialCards:(id)a1;
- (BOOL)getDisplaySubArray:(id)a0 length:(long long)a1 from:(id)a2;
- (void)findLatestConsumedCardFrom:(id)a0;
- (id)p_buildCustomizedCardConfigWithCardInfo:(id)a0;
- (id)p_buildCustomizedCardConfigsWithGiftExtraAssemblyInfo:(id)a0;
- (id)initWithGiftAssemblyInfo:(id)a0 giftId:(id)a1 preSelectCardName:(id)a2 toUserId:(id)a3;
- (id)buildCustomizedCardConfigs;
- (void).cxx_destruct;

@end
