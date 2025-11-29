@class BDPFullWindow, NSString, UIView, BDPUniqueID, BDPBubbleTip;
@protocol BDPToolBarViewProtocol;

@interface GuideBubbleClass : NSObject <BDPToolBarMessage, BDPFullWindowDelegate>

@property (retain, nonatomic) UIView<BDPToolBarViewProtocol> *toolBarView;
@property (retain, nonatomic) BDPBubbleTip *bubbleTip;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (nonatomic) BOOL isBubbleShowed;
@property (retain, nonatomic) BDPFullWindow *fullwindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerMessage;
- (void)tapGestureAction:(id)a0;
- (void)toolBarDidClickMoreButton:(id)a0;
- (BOOL)showBubbleTip:(id)a0 inContainerVC:(id)a1 uniqueID:(id)a2;
- (void)layoutFavoritesBubble:(id)a0 withContainerVC:(id)a1;
- (void)fullWindowDidTouchWithIsHit:(BOOL)a0;
- (void)hideBubbleTipWithCP;
- (void)layoutBubbleTipViewWithUniqueID:(id)a0 inContainerVC:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
