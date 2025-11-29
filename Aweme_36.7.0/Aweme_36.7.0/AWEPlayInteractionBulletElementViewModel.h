@class AWEPageContext, NSString, AWECommentAnchorModel;
@protocol AWEPlayInteractionContextProtocol;

@interface AWEPlayInteractionBulletElementViewModel : NSObject <AWEPlayInteractionViewModelProtocol>

@property (retain, nonatomic) AWECommentAnchorModel *anchorModel;
@property (retain, nonatomic) AWEPageContext<AWEPlayInteractionContextProtocol> *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)referString;
- (id)typeStringForGeneralAnchor;
- (void)onBarrageView:(id)a0 clickedAt:(struct CGPoint { double x0; double x1; })a1;
- (void)trackAnchorEntranceShow;
- (void)showCommentPanelForRichAwemeDetailWithInsertIds:(id)a0 isComment:(BOOL)a1;
- (void)showCommentPanelWithInsertIds:(id)a0 enterMethod:(id)a1 isComment:(BOOL)a2;
- (void)transferToUserProfile:(id)a0 enterMethod:(id)a1;
- (void)showCoinPanelWithInsertIds:(id)a0 enterMethod:(id)a1;
- (void)showGoldLikePanelWithInsertIDs:(id)a0 enterMethod:(id)a1;
- (void)trackShowCommentPanel:(id)a0;
- (void)onAnchorClicked;
- (id)model;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)reset;

@end
