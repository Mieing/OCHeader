@class NSNumber, NSArray, NSString;

@interface AWEFeedSubtitleManager : NSObject <AWEFeedSubtitleManagerProtocol>

@property (nonatomic) BOOL enableSubtitle;
@property (nonatomic) BOOL isSwitchOn;
@property (retain, nonatomic) NSNumber *selectedLanguageID;
@property (retain, nonatomic) NSNumber *lastSelectedLanguageID;
@property (copy, nonatomic) NSArray *sceneList;
@property (copy, nonatomic) NSArray *languageList;
@property (copy, nonatomic) NSArray *supportedLanguageModelList;
@property (nonatomic) BOOL downgradeToTruncation;
@property (nonatomic) BOOL isShowingPanel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (id)selectedLanguageModel;
- (void)revertSelectedLanguageModel;
- (BOOL)enableSubtitleWithScene:(id)a0;
- (BOOL)isSubtitleSwitchOn;
- (void)updateSubtitleSwitchOn:(BOOL)a0;
- (void)showSettingsPanelWithModel:(id)a0;
- (void)updateSelectedLanguageModelWithID:(long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
