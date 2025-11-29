@class AWEPageContext, AWEAwemeModel;
@protocol AWELandscapePageContextInteractionProtocol, AWEAwemePlayInteractionInteractorProtocol, AWELandscapeDiggElementDelegate;

@interface AWELandscapeDiggElementViewModel : NSObject

@property (retain, nonatomic) id<AWEAwemePlayInteractionInteractorProtocol> interactor;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEPageContext<AWELandscapePageContextInteractionProtocol> *context;
@property (weak, nonatomic) id<AWELandscapeDiggElementDelegate> delegate;

- (void)updateWithModel:(id)a0 context:(id)a1;
- (void)handleDiggVideoWithType:(long long)a0;
- (void)doSafeDigg:(BOOL)a0 enterMethod:(id)a1 ignoreUnlogin:(BOOL)a2 animationBlock:(id /* block */)a3;
- (void).cxx_destruct;

@end
