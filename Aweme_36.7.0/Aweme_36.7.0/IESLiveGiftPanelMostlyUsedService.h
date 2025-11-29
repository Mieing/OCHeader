@class NSSet, RACSubject, IESLiveGiftMostlyUsedAPI, RACSignal, HTSLiveGiftItemCollectionViewModel;
@protocol IESLiveSubscription, IESLiveGiftModuleRecipientRouter;

@interface IESLiveGiftPanelMostlyUsedService : NSObject

@property (nonatomic) BOOL customMostlyUsedEnable;
@property (nonatomic) BOOL hasChangePinStatus;
@property (nonatomic) BOOL updateCacheEnable;
@property (nonatomic) unsigned long long sortStrategy;
@property (copy, nonatomic) NSSet *mostlyUsedGiftIDs;
@property (retain, nonatomic) HTSLiveGiftItemCollectionViewModel *mostlyUsedPageViewModel;
@property (retain, nonatomic) IESLiveGiftMostlyUsedAPI *api;
@property (retain, nonatomic) RACSubject *sortStrategySubject;
@property (retain, nonatomic) id<IESLiveSubscription> disposable;
@property (weak, nonatomic) id<IESLiveGiftModuleRecipientRouter> recipientRouter;
@property (readonly, nonatomic) RACSignal *sortStrategySignal;

- (void)setupWithSortStrategy:(long long)a0;
- (void)updateMostlyUsedPageViewModel:(id)a0;
- (void)refreshGiftListCacheIfNeeded;
- (void)switchGiftStatus:(BOOL)a0 gift:(id)a1 completion:(id /* block */)a2;
- (BOOL)isMostlyUsedGift:(id)a0;
- (void)switchPinStatus:(BOOL)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
