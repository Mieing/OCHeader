@class NSArray, NSString, NSDate, NSNumber, NSMutableArray;

@interface AWEIMBirthdayManager : NSObject <IESIMUserServiceMessage>

@property (retain, nonatomic) NSDate *lastDate;
@property (retain, nonatomic) NSMutableArray *wishedUserList;
@property (retain, nonatomic) NSNumber *dismissCount;
@property (readonly, copy, nonatomic) NSArray *skylightBirthdayUserList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLogoutWithUid:(id)a0;
- (id)p_getStorageKeyWith:(id)a0;
- (void)clearLocalCacheIfNeed;
- (void)addBirthdayWishedUser:(id)a0;
- (id)birthdayWishTitleWithUser:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
