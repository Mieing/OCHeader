@class NSString;

@interface AFDFriendsFeedNonVideoContentManager : NSObject <AFDFriendsFeedNonVideoContentManagerProtocol>

@property (nonatomic) long long hasInsertTimes;
@property (nonatomic) BOOL didFetchedNoneVideoContentOnce;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)recordFamiliarFeedAppearNonVideoTimes;
- (void)fetchNoneVideoContentForFamiliarFeedWithCompletion:(id /* block */)a0;
- (long long)maximumTimesInsertNonVideo;
- (long long)maximumNumberShowNonVideo;
- (long long)familiarFeedHasShownNonVideoTimes;
- (long long)canInsertNonVideoNumInFamiliarFeed;
- (void)recordNonVideoContentLastShowDate;
- (id)storageKeyWithCurrentUserID:(id)a0;
- (void)clearShowTimesIfNeeded;
- (id)nonVideoContentLastShowDate;
- (id)initializeInsertTasks;
- (BOOL)canInsertNonVideoInFamiliarFeed:(BOOL)a0;
- (long long)canInsertRecommendCardNumInFamiliarFeed;
- (void)increaseInsertTimes;
- (void)refreshInsertTimes;
- (id)createPrioritizedInsertTasks;
- (id)init;

@end
