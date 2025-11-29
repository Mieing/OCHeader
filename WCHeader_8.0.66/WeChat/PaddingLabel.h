@class NSString;

@interface PaddingLabel : UILabel <QAnnotationViewCollisionDelegate>

@property (nonatomic) unsigned long long collisionType;
@property (nonatomic) double padding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
