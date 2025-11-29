@class NSArray, NSString, NSDictionary;
@protocol SLIScrollSubjectProtocol;

@interface SLIScrollBarElementView : IESECSliceXBaseContainerElementView <SLIScrollObserverProtocol>

@property (retain, nonatomic) NSArray *elementViews;
@property (retain, nonatomic) NSString *dependSliceKey;
@property (weak, nonatomic) id<SLIScrollSubjectProtocol> dependView;
@property (nonatomic) BOOL isVerticalScroll;
@property (retain, nonatomic) NSDictionary *latestExtraData;
@property (nonatomic) struct SLIScrollInfo { struct CGSize { double width; double height; } contentSize; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds; BOOL isVerticalScroll; struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInset; } previousInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)updateWithSliceXElement:(id)a0 error:(id *)a1;
- (BOOL)setupSubElementViews;
- (void)onViewScrollWithInfo:(struct SLIScrollInfo { struct CGSize { double x0; double x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; BOOL x2; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x3; })a0;
- (void)updateScrollBarWithInfo:(struct SLIScrollInfo { struct CGSize { double x0; double x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; BOOL x2; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x3; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
