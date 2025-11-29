@class RACSignal, NSString, RACSubject;
@protocol ACCAEInfoStickerDelegate;

@interface ACCAEInfoStickerViewModel : NSObject <ACCAEInfoStickerServiceProtocol>

@property (retain, nonatomic) RACSubject *addStickerFinishedSubject;
@property (retain, nonatomic) RACSubject *updateCurrentBindChallengesSubject;
@property (retain, nonatomic) RACSubject *didAppliedInfoStickerSubject;
@property (weak, nonatomic) id<ACCAEInfoStickerDelegate> delegate;
@property (readonly, nonatomic) RACSignal *addStickerFinishedSignal;
@property (readonly, nonatomic) RACSignal *updateCurrentBindChallengesSignal;
@property (readonly, nonatomic) RACSignal *didAppliedInfoStickerSignal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addInfoStickerWithContext:(id)a0;
- (void)replaceInfoStickerWithContext:(id)a0 willDeleteStickerId:(id)a1;
- (void)addRecentlyUsedSticker:(id)a0;
- (void)didAppliedInfoSticker:(long long)a0;
- (void)addRecentlyUsedThirdPartySticker:(id)a0;
- (void)finishAddingStickerWithContext:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
