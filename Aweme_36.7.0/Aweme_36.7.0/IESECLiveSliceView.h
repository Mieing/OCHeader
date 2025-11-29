@class NSString, UIView;
@protocol IESECSliceXEventForwardDelegate;

@interface IESECLiveSliceView : UIView

@property (retain, nonatomic) UIView *sliceContentView;
@property (retain, nonatomic) NSString *viewID;
@property (nonatomic) struct CGSize { double width; double height; } sliceViewExpectedSize;
@property (weak, nonatomic) id<IESECSliceXEventForwardDelegate> eventDelegate;

- (id)initWithSliceContentView:(id)a0 viewID:(id)a1 sliceViewExpectedSize:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
