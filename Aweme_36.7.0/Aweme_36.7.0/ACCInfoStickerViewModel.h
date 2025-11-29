@class NSMutableDictionary, RACSubject, RACSignal, AWEVideoPublishViewModel, ACCAnimatedDateStickerViewModel, NSString;
@protocol ACCModelFactoryServiceProtocol;

@interface ACCInfoStickerViewModel : NSObject <ACCInfoStickerServiceProtocol>

@property (retain, nonatomic) RACSubject *addStickerFinishedSubject;
@property (retain, nonatomic) RACSubject *updateCurrentBindChallengesSubject;
@property (retain, nonatomic) RACSubject *didAppliedInfoStickerSubject;
@property (retain, nonatomic) AWEVideoPublishViewModel *repository;
@property (retain, nonatomic) id<ACCModelFactoryServiceProtocol> factoryService;
@property (retain, nonatomic) NSMutableDictionary *cacheStickerChallengeNameDict;
@property (retain, nonatomic) ACCAnimatedDateStickerViewModel *dateStickerViewModel;
@property (readonly, nonatomic) RACSignal *addStickerFinishedSignal;
@property (readonly, nonatomic) RACSignal *updateCurrentBindChallengesSignal;
@property (readonly, nonatomic) RACSignal *didAppliedInfoStickerSignal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addRecentlyUsedSticker:(id)a0;
- (void)didAppliedInfoSticker:(long long)a0;
- (void)addRecentlyUsedThirdPartySticker:(id)a0;
- (void)finishAddingStickerWithContext:(id)a0;
- (void)fillChallengeDetailWithChallenge:(id)a0;
- (void)configChallengeInfo:(id)a0;
- (id)currentBindChallenges;
- (void)sendUpdateCurrentBindChallengesSignal:(id)a0 moduleKey:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
