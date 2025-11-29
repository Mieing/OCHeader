@class UILabel, UIImageView;

@interface IESLiveKTVTabSortButton : UIView

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIImageView *sortIcon;
@property (nonatomic) long long listType;
@property (nonatomic) BOOL isShowingTable;
@property (copy, nonatomic) id /* block */ didClickSortButton;

- (void)p_bindAction;
- (id)initWithScaleRatio:(long long)a0;
- (void)updateSortButtonLabelWithString:(id)a0;
- (void)p_setupUIWithScaleRatio:(long long)a0;
- (void)p_updateArrowImage;
- (void)p_didClickSortIcon;
- (void).cxx_destruct;
- (id)init;
- (void)clean;

@end
