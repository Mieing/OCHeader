@class AWEIMEmoticonThemeModel, NSArray, NSString, AWEIMEmoticonDisplayViewControllerConfig;

@interface AWEIMSimilarEmojiDisplayVCViewModel : NSObject <AWEIMBaseRenderViewControllerViewModelProtocol>

@property (retain, nonatomic) AWEIMEmoticonDisplayViewControllerConfig *context;
@property (retain, nonatomic) AWEIMEmoticonThemeModel *themeModel;
@property (copy, nonatomic) id /* block */ reloadBlock;
@property (copy, nonatomic) NSArray *sections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)enableShowSimilarEmoticon;
- (void)loadQuickLookSection;
- (void)loadSimilarEmoticonListSection;
- (id)similarEmoticonDisplaySection;
- (id)sectionClasses;
- (id)getSectionWithSessionType:(unsigned long long)a0;
- (id)loadSimilarEmoticonTaskWithRequestModel:(id)a0;
- (void)toNotifyReloadWithReloadModel:(id)a0;
- (BOOL)updateSimilarEmoticonDataWithResponseModel:(id)a0;
- (id)parseRequestParams:(id)a0;
- (id)getSectionWithSection:(long long)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)setupData;

@end
