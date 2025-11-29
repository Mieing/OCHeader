@class UILabel, IESLiveUserCardStore;

@interface IESLiveUserCardPreviewComponentView : UIView

@property (retain, nonatomic) IESLiveUserCardStore *store;
@property (retain, nonatomic) UILabel *descText;

- (void)trackWithEventName:(id)a0;
- (void)doTap;
- (void).cxx_destruct;
- (id)initWithStore:(id)a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
