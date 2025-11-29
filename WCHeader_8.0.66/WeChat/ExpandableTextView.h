@class NSString, ExpandableTextViewConfig;
@protocol ExpandableTextViewDelegate;

@interface ExpandableTextView : RichTextView <ILinkEventExt, WCFlexLayoutViewProtocol>

@property (retain, nonatomic) ExpandableTextViewConfig *config;
@property (nonatomic) BOOL isExpand;
@property (weak, nonatomic) id<ExpandableTextViewDelegate> expandDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConfig:(id)a0;
- (void)setFWidth:(double)a0;
- (void)setContent:(id)a0;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withView:(id)a2;
- (void)onTextClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withView:(id)a2;
- (struct CGSize { double x0; double x1; })onFlexLayoutMeasureSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
