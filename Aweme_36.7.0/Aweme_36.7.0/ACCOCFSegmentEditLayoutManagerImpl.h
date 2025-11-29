@class NSString, NSMapTable, UIView;

@interface ACCOCFSegmentEditLayoutManagerImpl : NSObject <ACCOCFLayoutManagerProtocol>

@property (retain, nonatomic) UIView *preview;
@property (retain, nonatomic) UIView *previewSnap;
@property (retain, nonatomic) UIView *playControlView;
@property (retain, nonatomic) UIView *segmentSelectView;
@property (retain, nonatomic) UIView *bottomView;
@property (retain, nonatomic) UIView *rootView;
@property (retain, nonatomic) NSMapTable *viewMapTable;
@property (nonatomic) struct CGSize { double width; double height; } editPreviewSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)bottomViewHeight;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculatePreviewFrame;
- (void)layoutView:(id)a0 forViewType:(unsigned long long)a1;
- (double)segmentSelectViewHeight;
- (double)previewTopY;
- (void).cxx_destruct;

@end
