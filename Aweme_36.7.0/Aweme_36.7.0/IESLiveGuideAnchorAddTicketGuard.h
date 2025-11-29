@class NSString;

@interface IESLiveGuideAnchorAddTicketGuard : NSObject <IESLiveGuideShopEntryAction, IESLiveGuideLocalLifeAction>

@property (nonatomic) BOOL isShopEntryFull;
@property (nonatomic) BOOL isLocalLifeFull;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDIContext:(id)a0;
- (void)goodsDidChangeWithEmpty:(BOOL)a0;
- (void)localLifeChangeWithEmpty:(BOOL)a0;
- (BOOL)isTimorEntryFull;
- (BOOL)isWelfareEntryFull;
- (BOOL)hasConflictingModule;
- (id)conflictToastString;
- (void)didUpdateTicket:(BOOL)a0;

@end
