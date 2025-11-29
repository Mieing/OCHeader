@class NSString, NSMapTable, UIView;

@interface HTSLiveLayoutSceneDoubleInteraction : NSObject <HTSLiveLayoutSceneProtocol>

@property (weak, nonatomic) NSMapTable *viewTable;
@property (weak, nonatomic) UIView *containerView;
@property (nonatomic) BOOL isAnchor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutPluginIfNeed;
- (void)layoutFlashSaleIndicator;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })pr_PKMediaViewFrame;
- (void)supportInfoForScene:(id)a0 container:(id)a1 isAnchor:(BOOL)a2;
- (void).cxx_destruct;
- (unsigned long long)currentScene;

@end
