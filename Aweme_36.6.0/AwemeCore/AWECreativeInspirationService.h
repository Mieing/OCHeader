@class AWEAweMVTemplateModel, NSString, AWENewFaceStickerModel;

@interface AWECreativeInspirationService : NSObject <AWEStudioCreativeInspirationService>

@property (retain, nonatomic) AWENewFaceStickerModel *propModel;
@property (retain, nonatomic) AWEAweMVTemplateModel *templateModel;
@property (nonatomic) unsigned long long materialType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)getAIGCUGCKeywordsType:(id)a0;
- (BOOL)currentIsInspirationPath;
- (BOOL)shouldBottomBarFollowedCell;
- (id)inspirationSelectLoraInfo;
- (id)inspirationShare;
- (BOOL)currentIsLoraModel:(id)a0;
- (BOOL)multiLoraIsBlockList:(id)a0;
- (BOOL)currentIsPixelMVWithAIAvatar:(id)a0;
- (void)inspirationSelectLoraInfo:(id)a0 model:(id)a1;
- (void)inspirationShareInfo:(id)a0 model:(id)a1;
- (id)detailBottomBarView;
- (BOOL)shouldShowAIGCKeywords:(id)a0;
- (id)inspirationBottomGradientView;
- (double)inspirationBottomGradientViewHeight;
- (double)detailBottomBarViewHeight;
- (void)updateBottomContentInfoWithContentView:(id)a0 awemeModel:(id)a1;
- (id)createLoraSuiteBottomContentViewWithElementCommonBottomOffSet:(double)a0;
- (id)createBottomContentViewWithElementCommonBottomOffSet:(double)a0;
- (BOOL)currentIsInspirationPathWithViewController:(id)a0;
- (double)inspirationBottomGradientColorAlpha;
- (void)webImageMainColorWithTargetView:(id)a0 aweme:(id)a1;
- (id)getAIGCUGCKeywords:(id)a0;
- (void)touchUpInsideShare:(id)a0;
- (void)webImageMainColorWithTargetView:(id)a0 aweme:(id)a1 gradientView:(id)a2;
- (void).cxx_destruct;

@end
