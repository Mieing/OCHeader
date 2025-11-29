@interface AWEAlbumAutoFilmUIConfig : NSObject

- (id)firstTipsContent;
- (id)secondaryTipsContentForNewUser;
- (id)secondaryTipsContentForRegular;
- (long long)step1ProgressPercentage;
- (long long)step2ProgressPercentage;
- (long long)step3ProgressPercentage;
- (double)step1ProgressUpdateInterval;
- (double)step3ProgressUpdateInterval;
- (double)step2ProgressUpdateIntervale;

@end
