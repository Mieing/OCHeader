@class NSString;

@interface WCFinderJustWatchContoller : NSObject

@property (retain, nonatomic) NSString *notifykey;
@property (nonatomic) long long watchIndex;
@property (nonatomic) BOOL hiddenJustWatchBanner;
@property (nonatomic) long long state;
@property (retain, nonatomic) NSString *justWatchTid;
@property (nonatomic) BOOL isLoading;
@property (nonatomic) BOOL feedPageSelectTag;
@property (nonatomic) BOOL showAnyBanner;

+ (id)controllerWithNotifyKey:(id)a0;

- (void)loadJustWtachRespCtrl:(id)a0 tid:(id)a1;
- (void)onFinishLoadShowAnyJustWatch:(id)a0;
- (void)onProfileTabChangeTriggeJustWatch;
- (void)_triggleJustWatchDisplay;
- (void)onHalfJumpFullScreenTryPost;
- (BOOL)isJustWatchingFeed:(id)a0;
- (void)onClickJumpToFeed;
- (void)notifyJustWatchCellDisplayed;
- (void)cleanJustWatch;
- (void).cxx_destruct;

@end
