@class NSArray, NSString, UIView, UIButton;
@protocol WCFinderMultiSelectedRedPacketSheetDelegate;

@interface WCFinderMultiSelectedRedPacketSheet : WCActionSheet <ILinkEventExt, WCFinderCarouseDelegate, WCFinderCarouselDatasource>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) NSArray *redPacketArray;
@property (nonatomic) long long curSelectIndex;
@property (retain, nonatomic) UIButton *acceptBtn;
@property (weak, nonatomic) id<WCFinderMultiSelectedRedPacketSheetDelegate> sheetDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRedPacketArray:(id)a0;
- (double)heightOfWholeSheet;
- (double)getCustomView:(double)a0;
- (double)contentHeight;
- (id)createContentView;
- (void)onClose;
- (void)onClickAccept;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)getCurSelectRedPacketInfo;
- (void)carouselView:(id)a0 didEndScrollAtIndex:(long long)a1 indexPathRow:(long long)a2;
- (void)updateAcceptBtnState;
- (long long)numbersForCarousel:(id)a0;
- (id)viewForCarousel:(id)a0 indexPath:(id)a1 index:(long long)a2;
- (void).cxx_destruct;

@end
