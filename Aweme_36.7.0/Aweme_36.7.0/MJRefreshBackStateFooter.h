@class UILabel, NSMutableDictionary;

@interface MJRefreshBackStateFooter : MJRefreshBackFooter {
    UILabel *_stateLabel;
}

@property (retain, nonatomic) NSMutableDictionary *stateTitles;
@property (nonatomic) double labelLeftInset;
@property (readonly, weak, nonatomic) UILabel *stateLabel;

- (void)placeSubviews;
- (void).cxx_destruct;
- (void)setTitle:(id)a0 forState:(long long)a1;
- (void)prepare;
- (void)setState:(long long)a0;
- (id)titleForState:(long long)a0;

@end
