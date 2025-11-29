@class NSDictionary, NSString, AWESearchBaseContainerConfig, AWEAwemeModel, AWEAIOriginalInputData, AWEUserModel, AWEAIOriginalResponse;
@protocol CachalotRenderPipelineComponentViewModel;

@interface AWEAIOriginalPageContext : AWEPageContext

@property (retain, nonatomic) AWEAIOriginalInputData *inputData;
@property (weak, nonatomic) AWESearchBaseContainerConfig *containerConfig;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEUserModel *currentLoginUser;
@property (retain, nonatomic) AWEAIOriginalResponse *response;
@property (copy, nonatomic) NSString *originalPageStyle;
@property (weak, nonatomic) id<CachalotRenderPipelineComponentViewModel> commentInputSectionViewModel;
@property (weak, nonatomic) id<CachalotRenderPipelineComponentViewModel> commentSectionViewModel;
@property (nonatomic) long long commentListState;
@property (copy, nonatomic) NSDictionary *commentEditText;
@property (copy, nonatomic) NSDictionary *lynxCommonParams;
@property (nonatomic) double lastEnterTime;
@property (nonatomic) long long spanNum;

- (id)commonTrackParams;
- (void)trackVideoPlay;
- (void)trackPlayTime;
- (void)trackClickCommentButton;
- (BOOL)shouldUseIMStyle;
- (void)addEntriesToLynxCommonParams:(id)a0;
- (void)trackEnterOriginalPage;
- (void)trackOriginalPageExit;
- (void)trackOriginalPageClickClose;
- (void)trackAIChatButtonShow;
- (void)trackAIChatButtonClick;
- (void)trackEnterPersonalDetailWithExtra:(id)a0;
- (void).cxx_destruct;

@end
