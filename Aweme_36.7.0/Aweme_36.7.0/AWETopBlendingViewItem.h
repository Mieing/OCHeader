@class UIColor, NSString, AWETopBlendingView;

@interface AWETopBlendingViewItem : NSObject <NSCopying, AWEVideoEffectRangeProtocol>

@property (nonatomic) double from;
@property (nonatomic) double to;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) double zorder;
@property (weak, nonatomic) AWETopBlendingView *blendingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithColor:(id)a0 fromPosition:(double)a1 toPostion:(double)a2;
- (void)updateNormalizedRangeFrom:(double)a0 to:(double)a1;
- (void)removeFromContainer;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
