@class IESECSliceXFlex, NSString;

@interface IESECSliceXBaseScrollView : UIScrollView <IESECSliceXFlexProtocol>

@property (readonly, nonatomic) IESECSliceXFlex *flex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)didAddSubview:(id)a0;
- (void)layoutSubviews;

@end
