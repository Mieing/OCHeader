@class NSString, NSMapTable, UIView;

@interface HTSLiveLayoutScenePlayerMoveUp : NSObject <HTSLiveLayoutSceneProtocol>

@property (nonatomic) double messageOriginY;
@property (weak, nonatomic) NSMapTable *viewTable;
@property (weak, nonatomic) UIView *containerView;
@property (nonatomic) BOOL isAnchor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)viewOfType:(id)a0;
- (void)layoutPluginIfNeed;
- (void)supportInfoForScene:(id)a0 container:(id)a1 isAnchor:(BOOL)a2;
- (id)initWithMessageOriginY:(double)a0;
- (void).cxx_destruct;
- (unsigned long long)currentScene;

@end
