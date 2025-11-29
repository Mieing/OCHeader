@class NSArray, NSString;

@interface AWEHomepageBottomToastManager : NSObject

@property (copy, nonatomic) NSArray *homepageBottomToast;
@property (copy, nonatomic) NSString *userID;

- (BOOL)shouldShowToast;
- (id)preferredHomepageBottomToast;
- (id)latestShowDateKey:(unsigned long long)a0;
- (id)showedTypeCountKey:(id)a0;
- (id)showedCountKey:(unsigned long long)a0;
- (void)updateLatestStatus:(id)a0;
- (void).cxx_destruct;
- (id)initWithUser:(id)a0;

@end
