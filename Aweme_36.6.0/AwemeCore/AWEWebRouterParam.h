@class NSString, NSDictionary;

@interface AWEWebRouterParam : BDXPageSchemaParam

@property (copy, nonatomic) NSString *groupID;
@property (nonatomic) BOOL shouldTrackWebDurationTime;
@property (copy, nonatomic) NSDictionary *customTrackDurationParams;
@property (copy, nonatomic) NSString *webViewDurationTimeEvent;
@property (copy, nonatomic) NSDictionary *adInfoDictionary;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *checkIronManJumpParam;
@property (nonatomic) unsigned long long navBarStyle;
@property (nonatomic) BOOL hideSourceLabel;
@property (nonatomic) BOOL forceDarkStyle;
@property (copy, nonatomic) NSString *falcon;
@property (nonatomic) BOOL autoStopAudioLeftPage;
@property (nonatomic) BOOL forceClose;
@property (nonatomic) BOOL enableMutiGesture;
@property (nonatomic) BOOL disableSearchInMenu;
@property (copy, nonatomic) NSString *enterFromMerge;
@property (copy, nonatomic) NSString *enterPosition;

+ (id)paramWithSchemaData:(id)a0;

- (void)updateWithSchemaData:(id)a0;
- (void).cxx_destruct;

@end
