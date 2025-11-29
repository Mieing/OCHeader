@class IESLiveAnchorAudienceInteractiveGameModel, NSString;
@protocol IESLiveGameOpenPlatformPanelToolViewDataSource;

@interface IESLiveGameOpenPlatformPanelToolViewModel : NSObject <IESLiveGameOpenPlatformPanelToolViewDataSource>

@property (retain, nonatomic) IESLiveAnchorAudienceInteractiveGameModel *gameModel;
@property (weak, nonatomic) id<IESLiveGameOpenPlatformPanelToolViewDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })toolViewSize;
- (double)toolViewWidth;
- (double)toolViewHeight;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })toolViewEdges;
- (id)toolItems;
- (id)initWithGameModel:(id)a0 diContext:(id)a1;
- (void).cxx_destruct;

@end
