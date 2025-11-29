@class UILabel, UIView;

@interface MMFinderLiveKTVPanelTitleView : UIView

@property (retain, nonatomic) UILabel *titleLeft;
@property (retain, nonatomic) UILabel *titleRight;
@property (retain, nonatomic) UIView *line;
@property (copy, nonatomic) id /* block */ switchPanelBlock;
@property (nonatomic) BOOL isRequestPanel;

- (void)layoutSubviews;
- (void)layoutUI;
- (void)onClickTitleLeft;
- (void)onClickTitleRight;
- (void).cxx_destruct;

@end
