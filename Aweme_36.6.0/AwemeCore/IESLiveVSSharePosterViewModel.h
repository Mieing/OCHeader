@class HTSEventContext, NSDictionary, NSString, IESLiveOpenMultiPosterSharePanelParamModel;
@protocol IESLiveRoomService;

@interface IESLiveVSSharePosterViewModel : NSObject <IESLiveVSSharePosterViewModelInterface>

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) IESLiveOpenMultiPosterSharePanelParamModel *paramModel;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (copy, nonatomic) id /* block */ enableStoryShare;
@property (retain, nonatomic) NSDictionary *storyShareInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showShareMultiPosterPanelWithModel:(id)a0;
- (id)initWithRoom:(id)a0 diContext:(id)a1;
- (void)preLoadImage;
- (void)p_showShareMultiPosterPanel;
- (void)showLandscapeShareMultiPosterPanel;
- (void)showShareMultiPosterPanel;
- (id)creatShareChainPreViewArrayDownLoadCompletion:(id /* block */)a0;
- (id)creatShareChainSaveViewArrayDownLoadCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
