@class MMLiveActionSheetFlowLayoutView, NSArray, NSString, MMLiveShopShelfDragBar, UIPanGestureRecognizer;

@interface MMFinderLiveAudienceFolderActionSheet : MMScrollActionSheet <UIGestureRecognizerDelegate, MMLiveActionSheetFlowLayoutViewDelegate>

@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (retain, nonatomic) MMLiveShopShelfDragBar *dragBar;
@property (retain, nonatomic) MMLiveActionSheetFlowLayoutView *flowLayoutView;
@property (retain, nonatomic) NSArray *realItemArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)commonInit;
- (id)containerViewBlurBackgroundColor;
- (void)setItemArray:(id)a0;
- (void)showInView:(id)a0;
- (double)getMaxHeight;
- (id)mmLiveActionSheetFlowLayoutView:(id)a0 getRedDotShowInfoAtPath:(id)a1;
- (void)onActionSheetItemClicked:(id)a0 senderView:(id)a1;
- (void)handlePopPanGesture:(id)a0;
- (id)getHeaderView;
- (void)handleContentGestureChangeTo:(double)a0;
- (void)handleContentGestureEnd;
- (id)seperatorBackgroundColor;
- (void)configScrollActionSheet:(id)a0 rowIndex:(unsigned long long)a1;
- (double)customIconMargin;
- (void).cxx_destruct;

@end
