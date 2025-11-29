@class WCFinderHistoryPageModel;

@interface WCFinderHistoryPageBase : UIView

@property (retain, nonatomic) WCFinderHistoryPageModel *pageModel;

+ (id)makePageForVM:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (void)openCollection:(id)a0 fromVC:(id)a1;

- (id)initWithModel:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)findMMVC;
- (void).cxx_destruct;

@end
