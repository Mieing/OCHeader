@class WCFinderSelectPanelView, NSString, NSArray, UIView;
@protocol WCFinderLimitedContentActionSheetDelegate;

@interface WCFinderLimitedContentActionSheet : WCActionSheet <WCFinderSelectPanelViewDelegate>

@property (retain, nonatomic) UIView *tipsView;
@property (retain, nonatomic) WCFinderSelectPanelView *panelView;
@property (weak, nonatomic) id<WCFinderLimitedContentActionSheetDelegate> finderDelegate;
@property (copy, nonatomic) NSString *titleContent;
@property (retain, nonatomic) NSArray *gridModels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)heightOfWholeSheet;
- (double)getCustomView:(double)a0;
- (id)getTipsActionSheetView;
- (void)onClickCancelButton;
- (void)onClickConfirmButton;
- (void).cxx_destruct;

@end
