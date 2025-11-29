@class TingListSourceContext, NSString, TingLaunchOptionsOpenPlayerTab, NSData, TingLaunchOptionsNextPage, ActiveSessionContext, UIViewController, TingEntranceReddotInfo, TingItem;

@interface TingLaunchOptions : NSObject

@property (nonatomic) int scene;
@property (nonatomic) BOOL enterPlayer;
@property (nonatomic) int displayMode;
@property (nonatomic) unsigned long long bizAudiodPlayerUIMode;
@property (nonatomic) unsigned long long bizType;
@property (retain, nonatomic) TingLaunchOptionsNextPage *nextPage;
@property (weak, nonatomic) UIViewController *fromViewController;
@property (retain, nonatomic) ActiveSessionContext *sessionContext;
@property (retain, nonatomic) TingLaunchOptionsOpenPlayerTab *openPlayerTab;
@property (copy, nonatomic) NSString *categoryCommentId;
@property (nonatomic) unsigned long long resetOptions;
@property (nonatomic) BOOL disableAutoTabSwitch;
@property (nonatomic) BOOL realFocusOnLateListen;
@property (retain, nonatomic) NSString *focusListId;
@property (retain, nonatomic) TingListSourceContext *focusListContext;
@property (retain, nonatomic) TingItem *tingItem;
@property (nonatomic) unsigned long long launchType;
@property (nonatomic) BOOL playManually;
@property (nonatomic) BOOL isFromFinderProfileAuthor;
@property (nonatomic) BOOL refreshMusicSquarePreload;
@property (retain, nonatomic) TingEntranceReddotInfo *entranceReddotInfo;
@property (nonatomic) BOOL skipRefreshIfCreate;
@property (nonatomic) BOOL markOnlyRefresh;
@property (nonatomic) BOOL hasSquare;
@property (nonatomic) BOOL forceObliterateOther;
@property (retain, nonatomic) NSString *tingAppIdentifier;
@property (retain, nonatomic) NSData *finderSleepModeJumpInfo;
@property (nonatomic) BOOL alwaysOpenNewPage;
@property (nonatomic) BOOL shouldPlaySubCategory;

+ (int)tingProfileScene:(int)a0;
+ (id)launchOptionsWithScene:(int)a0;
+ (id)unsafeLaunchOptionsWithLaunchOptions:(id)a0 scene:(int)a1;

- (id)flutterRouterParams;
- (id)flutterInitRouterName;
- (id)flutterRouterName;
- (id)initWithScene:(int)a0;
- (void).cxx_destruct;

@end
