@class NSMutableDictionary;

@interface WACanvasCoverViewContainer : UIView

@property (retain, nonatomic) NSMutableDictionary *coverViewDic;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (BOOL)insertChildViewInCoverView:(id)a0 viewId:(unsigned int)a1 parentId:(unsigned int)a2;
- (BOOL)updateParentIdInCoverView:(unsigned int)a0 forChild:(unsigned int)a1;
- (id)getChildViewInCoverView:(unsigned int)a0;
- (BOOL)removeChildViewInCoverView:(unsigned int)a0;
- (id)getChildViewsInCoverView;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
