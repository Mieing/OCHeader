@class IESECSliceXFlex, NSString;

@interface IESECSliceXBaseButton : UIButton <IESECSliceXFlexProtocol>

@property (readonly, nonatomic) IESECSliceXFlex *flex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)didAddSubview:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
