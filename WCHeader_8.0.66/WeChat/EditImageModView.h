@class NSString, EditImageUIView, UIColor;

@interface EditImageModView : MMObject <NSCopying>

@property (retain, nonatomic) EditImageUIView *_czUIView;
@property (nonatomic) unsigned int _modProperty;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _pFrame;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _pTransform;
@property (nonatomic) struct CGPoint { double x; double y; } _pCenter;
@property (nonatomic) struct CGPoint { double x; double y; } _pAnchorPoint;
@property (nonatomic) double _pViewScale;
@property (copy, nonatomic) NSString *_pText;
@property (nonatomic) BOOL _hide;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _pGridFrame;
@property (nonatomic) double _pScale;
@property (nonatomic) struct CGPoint { double x; double y; } _pOffset;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _pCropFrame;
@property (nonatomic) unsigned int _pViewIndex;
@property (nonatomic) unsigned long long _pOrientation;
@property (retain, nonatomic) UIColor *_pTextColor;

- (id)init;
- (id)initWithNewView:(id)a0;
- (id)initWithCurrentView:(id)a0;
- (id)initWithCropGridFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withScale:(double)a1 withOffset:(struct CGPoint { double x0; double x1; })a2 withCropFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 withImageFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 withOrientation:(unsigned long long)a5;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isChanged;
- (void).cxx_destruct;

@end
