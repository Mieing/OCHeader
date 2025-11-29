@class AWESearchAIGCService, AWESearchAIGCServiceConfig, AWESearchAIGCChatMonitor, AWESearchAIGCQARoundInfoManager, UIView, AWESearchAIGCFoldNodeManager, AWESearchAIGCCacheCmdService;
@protocol AWESearchAIGCServiceDelegate, CachalotRenderPipelineComponentViewModel, SearchCachalotViewInterface;

@interface AWESearchAIGCServiceContext : NSObject

@property (weak, nonatomic) AWESearchAIGCService *service;
@property (weak, nonatomic) AWESearchAIGCServiceConfig *config;
@property (weak, nonatomic) id<AWESearchAIGCServiceDelegate> container;
@property (weak, nonatomic) AWESearchAIGCChatMonitor *chatMonitor;
@property (weak, nonatomic) AWESearchAIGCFoldNodeManager *foldNodeManager;
@property (weak, nonatomic) id<CachalotRenderPipelineComponentViewModel> generalAIContainerViewModel;
@property (weak, nonatomic) UIView<SearchCachalotViewInterface> *cachalotView;
@property (weak, nonatomic) AWESearchAIGCQARoundInfoManager *roundInfoManager;
@property (nonatomic) BOOL cmdUseAnimation;
@property (weak, nonatomic) AWESearchAIGCCacheCmdService *cacheCmdService;

- (void).cxx_destruct;

@end
