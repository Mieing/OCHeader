@class AWESearchAIGCImageSelectionContainerBackgroundCoverView, NSArray, NSDictionary, AWESearchAIGCImageSelectionHanlderView, NSMutableArray;

@interface AWESearchAIGCImageSelectionContainer : UIView

@property (nonatomic) BOOL isSmallType;
@property (nonatomic) BOOL enableClickSelection;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } containerBounds;
@property (retain, nonatomic) AWESearchAIGCImageSelectionContainerBackgroundCoverView *coverView;
@property (copy, nonatomic) NSArray *boxArray;
@property (retain, nonatomic) NSMutableArray *selectionHandleViewArray;
@property (retain, nonatomic) NSMutableArray *selectionRectArray;
@property (copy, nonatomic) NSDictionary *selectedBoxDic;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } selectedBoxRect;
@property (nonatomic) long long selectedIndex;
@property (retain, nonatomic) AWESearchAIGCImageSelectionHanlderView *selectedHanlderView;
@property (copy, nonatomic) id /* block */ clickHandler;

- (void)updateWithSelectedIndex:(long long)a0;
- (void)clearSelectedFrame;
- (void)setupCover;
- (void)setupSelectionArray;
- (void)setupSelectedElement;
- (id)selectionRectArrayForBoxArray:(id)a0;
- (void)setupClickHandlerWithView:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boxRectForBoxDic:(id)a0;
- (unsigned long long)indexForHandleView:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })selectionRectForBoxDic:(id)a0;
- (void)updateBoxArray:(id)a0 withSelectedIndex:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)setupView;
- (void)setupUI;

@end
