@class NSString, MMLiveStatistics, WCFinderDataItem, WCFinderContact;

@interface MMLiveStatisticsPosterViewController : MMLiveRoundButtonsPosterViewController <MMLivePosterReporting>

@property (retain, nonatomic) MMLiveStatistics *stats;
@property (retain, nonatomic) WCFinderContact *anchorContact;
@property (nonatomic) unsigned int liveCreationUnixEpochTime;
@property (retain, nonatomic) NSString *liveDescription;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStatistics:(id)a0 forLiveTask:(id)a1;
- (id)backdropColor;
- (BOOL)enableFavoriting;
- (id)reporter;
- (id)createPosterViews;
- (void)onSaveImageButtonExposed;
- (void)onShareButtonExposed;
- (void)onSaveImageButtonInvoked;
- (void)onSharedSuccessfullyToChatWithUsernames:(id)a0;
- (void)onSharedSuccessfullyToMoments;
- (void).cxx_destruct;

@end
