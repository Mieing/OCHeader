@class CECPublishPrivacyRequestModel;

@interface CECPublishPrivacyDataFetchManger : NSObject

@property (retain, nonatomic) CECPublishPrivacyRequestModel *requestModel;

+ (id)sharedInstance;

- (BOOL)isFriendVisible;
- (void)fetchPublishPrivacyData;
- (long long)defaultSelectedTypeWithMode:(long long)a0;
- (id)lastPublishNotesMomentPrivacyKey;
- (id)lastPublishMomentPrivacyKey;
- (id)hasEnterPublishPageForMomentKey;
- (id)hasEnterPublishPageForNotesKey;
- (BOOL)isNeededShow:(long long)a0;
- (BOOL)isNeededCache:(long long)a0;
- (id)defaultmodel;
- (id)arrayNeededCache;
- (id)arrayNeededShow;
- (BOOL)hasPublishedNewMoment;
- (BOOL)isCloseFriendVisible;
- (BOOL)isPartFriendVisible;
- (void).cxx_destruct;
- (id)cacheKey;

@end
