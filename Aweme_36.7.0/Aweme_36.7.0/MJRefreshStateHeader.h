@class UILabel, NSMutableDictionary;

@interface MJRefreshStateHeader : MJRefreshHeader {
    UILabel *_lastUpdatedTimeLabel;
    UILabel *_stateLabel;
}

@property (retain, nonatomic) NSMutableDictionary *stateTitles;
@property (copy, nonatomic) id /* block */ lastUpdatedTimeText;
@property (readonly, weak, nonatomic) UILabel *lastUpdatedTimeLabel;
@property (nonatomic) double labelLeftInset;
@property (readonly, weak, nonatomic) UILabel *stateLabel;

- (void)placeSubviews;
- (void)setLastUpdatedTimeKey:(id)a0;
- (void).cxx_destruct;
- (void)setTitle:(id)a0 forState:(long long)a1;
- (void)prepare;
- (id)currentCalendar;
- (void)setState:(long long)a0;

@end
