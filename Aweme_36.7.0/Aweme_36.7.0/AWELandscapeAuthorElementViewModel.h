@class AWEPageContext, NSString, AWEAwemeModel;
@protocol AWELandscapePageContextInteractionProtocol, AWELandscapeAuthorElementDelegate;

@interface AWELandscapeAuthorElementViewModel : NSObject <AWEUserMessage>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEPageContext<AWELandscapePageContextInteractionProtocol> *context;
@property (nonatomic) BOOL doFollowing;
@property (weak, nonatomic) id<AWELandscapeAuthorElementDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (id)coCreators;
- (BOOL)canFollow;
- (void)updateWithModel:(id)a0 context:(id)a1;
- (BOOL)shouldShowCoCreatorsView;
- (void)handleClickUser:(id)a0;
- (void)handleClickFollow;
- (void)handleClickCoCreator:(id)a0;
- (BOOL)shouldChangeAuthorInfo;
- (void)realFollowAction;
- (void).cxx_destruct;
- (id)init;
- (id)currentUser;
- (void)dealloc;

@end
