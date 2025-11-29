@class UILabel, NSMutableDictionary;

@interface MJRefreshAutoStateFooter : MJRefreshAutoFooter {
    UILabel *_stateLabel;
}

@property (retain, nonatomic) NSMutableDictionary *stateTitles;
@property (nonatomic) double labelLeftInset;
@property (readonly, weak, nonatomic) UILabel *stateLabel;
@property (nonatomic, getter=isRefreshingTitleHidden) BOOL refreshingTitleHidden;

- (void)placeSubviews;
- (void)stateLabelClick;
- (void).cxx_destruct;
- (void)setTitle:(id)a0 forState:(long long)a1;
- (void)prepare;
- (void)setState:(long long)a0;

@end
