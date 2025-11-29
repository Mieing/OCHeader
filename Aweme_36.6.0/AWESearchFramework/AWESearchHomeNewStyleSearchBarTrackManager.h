@class NSString;

@interface AWESearchHomeNewStyleSearchBarTrackManager : NSObject

@property (retain, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *groupId;
@property (copy, nonatomic) NSString *defaultText;
@property (copy, nonatomic) NSString *wordId;
@property (copy, nonatomic) NSString *searchBarStatus;
@property (copy, nonatomic) NSString *btm;
@property (nonatomic) BOOL isFromSearchBar;
@property (copy, nonatomic) NSString *wordsSource;

+ (id)buttonNameFrom:(unsigned long long)a0;
+ (id)buttonPositionFrom:(unsigned long long)a0;
+ (id)enterMethodFrom:(unsigned long long)a0;

- (void)searchBarClickTrack:(unsigned long long)a0 buttonPositionType:(unsigned long long)a1 isDeepThinkOpen:(BOOL)a2;
- (void)trendingWordsClickTrack;
- (void)searchBarClickTrack:(unsigned long long)a0 buttonPositionType:(unsigned long long)a1 isSuperAgentOpen:(BOOL)a2;
- (void)enterSearchTrack:(unsigned long long)a0 searchEntranceStyle:(id)a1 presetWordsType:(id)a2 originEnterMethod:(id)a3;
- (void)showSearchTrackWithIndexInFeed:(long long)a0;
- (void)homepageHomeButtonShowTrack:(unsigned long long)a0;
- (void)homepageHomeButtonClickTrack:(unsigned long long)a0;
- (void)trendingWordsShowTrackWithParams:(id)a0;
- (void)enterSearchTrack:(unsigned long long)a0 searchEntranceStyle:(id)a1 originEnterMethod:(id)a2;
- (void).cxx_destruct;

@end
