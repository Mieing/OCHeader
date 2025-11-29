@class WCFinderFeedContentVM, UIView;

@interface WCFinderRingToneEduActionSheet : WCActionSheet

@property (retain, nonatomic) UIView *tipsView;
@property (copy, nonatomic) id /* block */ setRingToneCgiBlock;
@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;

- (double)heightOfWholeSheet;
- (double)getCustomView:(double)a0;
- (id)getTipsActionSheetView;
- (void)onClickSetRingToneAction;
- (void)onClickCloseBtn;
- (void).cxx_destruct;

@end
