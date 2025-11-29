@class NSString, IESLiveInteractionLayoutSlot, NSNumber;
@protocol IESLiveCompoundSubscription, IESLiveInteractionLayoutCanvasCellModelDataSource, IESLiveInteractUserModel;

@interface IESLiveInteractionLayoutCanvasCellModel : NSObject

@property (copy, nonatomic) id /* block */ onUserUpdateBlock;
@property (copy, nonatomic) id /* block */ onSessionViewUpdatedBlock;
@property (copy, nonatomic) id /* block */ onViewStateUpdatedBlock;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> userDisposable;
@property (nonatomic) BOOL enableFullScreenRender;
@property (weak, nonatomic) id<IESLiveInteractionLayoutCanvasCellModelDataSource> dataSource;
@property (retain, nonatomic) IESLiveInteractionLayoutSlot *slotConfig;
@property (readonly, copy, nonatomic) NSString *cellIdentifier;
@property (retain, nonatomic) id<IESLiveInteractUserModel> user;
@property (nonatomic) BOOL mediaContainerHidden;
@property (nonatomic) BOOL contentViewHidden;
@property (retain, nonatomic) NSNumber *visible;

- (void)refreshViewState;
- (BOOL)enableRadiusBgCut;
- (void)onUserUpdated:(id /* block */)a0;
- (void)onSessionViewUpdated:(id /* block */)a0;
- (void)onStateUpdated:(id /* block */)a0;
- (void)insertRTCSessionView:(id)a0 isLocalPreview:(BOOL)a1 preferredFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)observerUser:(id)a0;
- (void).cxx_destruct;
- (void)updateUser:(id)a0;

@end
