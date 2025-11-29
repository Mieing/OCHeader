@class NSString, NSDictionary, AWEAwemeModel, NSObject;
@protocol AWEFeedAnchorViewManager;

@interface AWECommentVCHeaderAnchorComponent : UIView <AWECommentVCHeaderAnchorComponentProtocol>

@property (retain, nonatomic) NSObject<AWEFeedAnchorViewManager> *anchorViewManager;
@property (weak, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) NSDictionary *trackParam;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateCartAnchorIfNeeded:(id)a0;
- (void)updateAnchorView;
- (void)setAnchorHidden:(BOOL)a0;
- (BOOL)isAnchorHidden;
- (void)updateWithAwemeModel:(id)a0 referString:(id)a1 interactionViewController:(id)a2 pageContext:(id)a3;
- (BOOL)shouldShowAnchorView;
- (void)updateLayout;
- (void).cxx_destruct;
- (double)viewHeight;

@end
