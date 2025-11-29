@interface GCClvMgrEasyInitConfig : NSObject

@property (nonatomic) struct CGSize { double width; double height; } itemSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } scrollViewFrame;
@property (nonatomic) long long scrollDirection;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } sectionInset;
@property (nonatomic) BOOL supportLongPress;

+ (id)viewMgrWithInitConfig:(id)a0 pagingNumItem:(int)a1;

@end
