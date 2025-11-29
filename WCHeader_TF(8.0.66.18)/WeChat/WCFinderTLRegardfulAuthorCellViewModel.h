@class MMFinderLiveContentVM, NSString, WCFinderContact;

@interface WCFinderTLRegardfulAuthorCellViewModel : NSObject <WCFinderContactExt, WCFinderLiveExt>

@property (retain, nonatomic) WCFinderContact *contact;
@property (retain, nonatomic) MMFinderLiveContentVM *liveContentVM;
@property (nonatomic) unsigned long long lastestUnreadTime;
@property (nonatomic) unsigned long long localLastestUpdateTime;
@property (copy, nonatomic) NSString *lastReadLiveFeedID;
@property (nonatomic) BOOL needDelete;
@property (nonatomic) BOOL hadRead;
@property (nonatomic) BOOL hadShowLive;
@property (readonly, nonatomic) BOOL showRedDotView;
@property (readonly, nonatomic) BOOL showShowLiveRedDotView;
@property (readonly, nonatomic) BOOL unreadNewFeed;
@property (copy, nonatomic) NSString *lastFeedID;
@property (copy, nonatomic) NSString *lastNonceID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)regardfulAuthorCellViewModelWithOfterReadItem:(id)a0;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void)updateContactUnreadTime;
- (void)updateContactLastestLiveID;
- (void)onFinderContactLivingStatusHasChange:(id)a0;
- (void)updateDeleteStatus;
- (void)onJoinFinderLiveError:(id)a0 finderDataItem:(id)a1 joinLiveContext:(id)a2 errorPage:(id)a3;
- (void).cxx_destruct;

@end
