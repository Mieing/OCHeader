@class NSString, UIView;

@interface IESECSliceXBaseContentElementView : IESECSliceXBaseElementView <IESECSliceXFlexDelegate>

@property (readonly, nonatomic) UIView *contentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)layoutSubviews;

@end
