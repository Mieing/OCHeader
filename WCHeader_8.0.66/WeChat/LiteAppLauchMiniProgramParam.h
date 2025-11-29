@class NSString, NSDictionary;

@interface LiteAppLauchMiniProgramParam : NSObject

@property (retain, nonatomic) id referrerData;
@property (retain, nonatomic) id privateReferrerData;
@property (nonatomic) BOOL openDataChannel;
@property (retain, nonatomic) NSString *mode;
@property (retain, nonatomic) NSDictionary *halfScreenParam;
@property (retain, nonatomic) NSDictionary *singlePageParam;
@property (retain, nonatomic) NSDictionary *uiParam;
@property (nonatomic) long long scene;
@property (retain, nonatomic) NSString *sceneNote;
@property (retain, nonatomic) NSString *liteGameInfo;
@property (retain, nonatomic) NSString *enterType;
@property (retain, nonatomic) NSString *loadingDarkModeStyle;

- (void).cxx_destruct;

@end
