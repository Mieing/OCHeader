@class UIView, NSString, AWEModernFeedSectionMeta, AWEGradientView, AWESearchAutoPlayHandler, AWESearchGuideView, AWEModernFeedCellBackgroundModel, AWEModernFeedSectionFooterView, AWEModernFeedCellSeparatorModel, UIViewController;
@protocol AWEModernFeedCellControllerProtocol;

@interface AWEModernFeedConcreteCollectionViewCell : UICollectionViewCell <AWESearchAutoPlayCardProtocol>

@property (retain, nonatomic) AWESearchGuideView *touchPlayGuideView;
@property (weak, nonatomic) UIViewController<AWEModernFeedCellControllerProtocol> *cellController;
@property (retain, nonatomic) AWEModernFeedCellSeparatorModel *bottomSeparator;
@property (retain, nonatomic) AWEModernFeedCellBackgroundModel *cellBackgroundModel;
@property (weak, nonatomic) UIViewController<AWEModernFeedCellControllerProtocol> *attachmentCellController;
@property (retain, nonatomic) AWEGradientView *backgroundGradientView;
@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UIView *footerView;
@property (retain, nonatomic) AWEModernFeedSectionFooterView *newLayoutFooterView;
@property (nonatomic) BOOL isActive;
@property (retain, nonatomic) AWEModernFeedSectionMeta *meta;
@property (nonatomic) BOOL customizedBgView;
@property (weak, nonatomic) AWESearchAutoPlayHandler *autoPlayHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)watefallCardCoverNeedAdjust;

- (BOOL)shouldNotActive;
- (void)addTouchPlayGuide;
- (void)removeTouchPlayGuide;
- (void)rectangleBackground;
- (void)cornerRadiusWithMaskPath:(id)a0;
- (BOOL)p_cellControllerCanCallSetAutoPlayHandler;
- (BOOL)p_cellControllerCanCallDidBecomeActive;
- (BOOL)p_cellControllerCanCallDidResignActive;
- (BOOL)p_cellControllerCanCallActiveView;
- (BOOL)p_cellControllerCanCallShouldNotActive;
- (BOOL)p_cellControllerCanCallHasVideo;
- (void)resetBackground;
- (void)rectangleBackgroundWithAttachment;
- (void)addCornerRadiusForView:(id)a0 andPath:(id)a1;
- (void)didBecomeActive;
- (void).cxx_destruct;
- (id)init;
- (BOOL)hasVideo;
- (void)didResignActive;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)activeView;

@end
