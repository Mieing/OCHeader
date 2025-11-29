@class UIImageView, NSMutableDictionary;

@interface MJRefreshGifHeader : MJRefreshStateHeader {
    UIImageView *_gifView;
}

@property (retain, nonatomic) NSMutableDictionary *stateImages;
@property (retain, nonatomic) NSMutableDictionary *stateDurations;
@property (readonly, weak, nonatomic) UIImageView *gifView;

- (void)placeSubviews;
- (void)setPullingPercent:(double)a0;
- (void)setImages:(id)a0 duration:(double)a1 forState:(long long)a2;
- (void)setImages:(id)a0 forState:(long long)a1;
- (void).cxx_destruct;
- (void)prepare;
- (void)setState:(long long)a0;

@end
