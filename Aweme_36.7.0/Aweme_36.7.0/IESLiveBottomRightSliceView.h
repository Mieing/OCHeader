@class HTSLiveBottomRightCardArea, UIView;
@protocol IESLiveSliceXInstanceInterface;

@interface IESLiveBottomRightSliceView : UIView

@property (retain, nonatomic) HTSLiveBottomRightCardArea *cardArea;
@property (retain, nonatomic) UIView *sliceXView;
@property (retain, nonatomic) id<IESLiveSliceXInstanceInterface> sliceXInstance;

- (id)initWithBottomRightCardArea:(id)a0;
- (void)updateWithBottomRightCardArea:(id)a0;
- (void).cxx_destruct;
- (void)setup;

@end
