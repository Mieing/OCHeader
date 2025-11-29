@class NSArray;

@interface AWESharePanelFunctionsDataManager : NSObject

@property (copy, nonatomic) NSArray *dataSource;

+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;

- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (void)fetchSharePanelFunctionConfigWithScene:(id)a0 shareContext:(id)a1 customConfiguration:(id)a2 shareView:(id)a3;
- (void)generateCutomShareFunctionDataSourceWithshareContext:(id)a0 CustomConfiguration:(id)a1 shareView:(id)a2;
- (id)localFunctionConfigModelWithScene:(id)a0 isVideoAuthor:(BOOL)a1 shareContext:(id)a2;
- (id)chapterShareLocalModels;
- (unsigned long long)functionIconStyleWithPanelSceneType:(id)a0 lineCount:(long long)a1 currentLineIndex:(long long)a2;
- (id)feedOverseaLocalConfigWithLoadConfig:(id)a0;
- (id)feedADLocalConfigWithLoadConfig:(id)a0;
- (id)feedAwemeLocalConfigWithLoadConfig:(id)a0;
- (id)local25StoryConfigWithLoadConfig:(id)a0;
- (id)userCardLocalConfigWithLoadConfig:(id)a0;
- (id)miniProgramLocalConfigWithLoadConfig:(id)a0;
- (id)groupChatLocalConfigWithLoadConfig:(id)a0;
- (id)groupChatQRCodeLocalConfigWithLoadConfig:(id)a0;
- (id)landscapeLocalConfigWithLoadConfig:(id)a0;
- (id)longArticleLocalConfigWithLoadConfig:(id)a0;
- (id)groupChatScreenShootShareConfigWithLoadConfig:(id)a0;
- (id)jxSharePanelQRCodePos;
- (id)AIROILocalConfigWithLoadConfig:(id)a0;
- (void).cxx_destruct;

@end
