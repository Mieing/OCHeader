@class NSString, NSDictionary, AWEHotSpotListModel, AWEAwemeModel;

@interface AWEFeedRelatedReadingJumpManager : NSObject <DUXSheetDelegate, AWEFeedBottomTipProtocol>

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEHotSpotListModel *hotSpotListModel;
@property (retain, nonatomic) NSDictionary *textAttributes;
@property (nonatomic) long long type;
@property (nonatomic) long long currentScene;
@property (copy, nonatomic) NSString *realDiversionType;
@property (copy, nonatomic) NSString *referString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)showFeedBottomArticleBarSuperiorToHotSearch:(id)a0 otherParams:(id)a1;
+ (BOOL)showFeedBottomArticleBarInferiorToHotSearch:(id)a0 otherParams:(id)a1;
+ (id)separateGroupIDFromSchema:(id)a0;
+ (id)addParams:(id)a0 toString:(id)a1;
+ (id)relatedArticleParamsWithModel:(id)a0 enterFrom:(id)a1;
+ (void)setCheckBoxStatus:(BOOL)a0 forAction:(id)a1;
+ (id)separateParamFromBdpLog:(id)a0 param:(id)a1;
+ (id)mpGuideSwitchWithModel:(id)a0;

- (void)sheetDidClickMaskArea:(id)a0;
- (void)sheetDidClickCloseButton:(id)a0;
- (id)commonTrackParams;
- (void)tryOpenMpWithScheme:(id)a0;
- (void)jumpAction;
- (void)configureWithModel:(id)a0 referString:(id)a1;
- (void)clearOpenAppDialogAction:(id)a0;
- (BOOL)showFeedBottomArticleBarSuperiorToHotSearch;
- (BOOL)showFeedBottomArticleBarInferiorToHotSearch;
- (long long)viewTypeForString:(id)a0 model:(id)a1;
- (void)configureWithModel:(id)a0 type:(long long)a1;
- (long long)sceneForType:(long long)a0;
- (void)jumpUsingSchema;
- (BOOL)canOpenApp;
- (unsigned long long)openAppType;
- (BOOL)isRelatedArticle;
- (id)relatedArticleAppendParamDict;
- (void)tryOpenAppWithURL:(id)a0 mpSchema:(id)a1;
- (id)mpTrackerDict;
- (void)showOpenAppNewDialog:(id)a0 mpSchema:(id)a1;
- (void)openApp;
- (void)showOpenAppOldDialog:(id)a0 mpSchema:(id)a1;
- (void)trackOpenAppDialogShow;
- (id)openAppDialogTitle;
- (void)trackOpenAppDialogClick:(id)a0 checked:(BOOL)a1;
- (id)openAppConfig;
- (void)showSheetWithViewController:(id)a0 sheetHeight:(double)a1 openAppURL:(id)a2 mpSchema:(id)a3;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
