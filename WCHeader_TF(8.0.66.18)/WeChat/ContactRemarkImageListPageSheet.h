@class NSArray, NSString, MMUIView, NSMutableArray;

@interface ContactRemarkImageListPageSheet : MMPageSheetBaseView <CardImageBrowseViewControllerDelegate>

@property (retain, nonatomic) NSArray *cardImgList;
@property (retain, nonatomic) NSMutableArray *cardImgViewList;
@property (retain, nonatomic) MMUIView *containerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCardImgList:(id)a0;
- (void)initConfig;
- (void)initView;
- (id)getRemarkImageListView;
- (double)getImageViewSize;
- (void)onTapCardImg:(id)a0;
- (void)onCardImageBrowseViewControllerDidDeleteImageAtIndex:(unsigned int)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cardImgViewFrameAtIndex:(unsigned int)a0;
- (BOOL)onCardImageBrowseViewControllerImageActionSheet:(id)a0 shouldShowItem:(id)a1;
- (void).cxx_destruct;

@end
