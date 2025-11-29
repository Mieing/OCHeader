@class IESLiveRankListViewBuilder, NSString, UIView;
@protocol IESLiveDynamicRankListEntranceViewDataProvider, IESLiveDynamicRankListEntranceViewDelegate, IESHYContainerProtocol;

@interface IESLiveDynamicRankListEntranceView : UIView <IESHYHybridViewLifecycleProtocol, HTSLivePluginLayoutView>

@property (weak, nonatomic) id<IESLiveDynamicRankListEntranceViewDelegate> delegate;
@property (weak, nonatomic) id<IESLiveDynamicRankListEntranceViewDataProvider> dataProvider;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *hybridContainer;
@property (retain, nonatomic) IESLiveRankListViewBuilder *viewBuilder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void)didSetAttachingDIContext;
- (void)enterRoom;
- (void)viewDidChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)viewDidLoadFailedWithUrl:(id)a0 error:(id)a1;
- (void)exitRoom:(BOOL)a0;
- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (void)setupHybridContainer;
- (void)updateEntranceStatus:(id)a0;
- (void)showEntrance:(BOOL)a0;
- (id)initWithDelegate:(id)a0 dataProvider:(id)a1;
- (void).cxx_destruct;
- (id)viewType;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
