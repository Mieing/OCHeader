@class UIImageView, UILabel, UIView, IESLiveUserCardStore;

@interface IESLiveMyLiveHonorOpenMoreView : UIView

@property (retain, nonatomic) UILabel *openLabel;
@property (retain, nonatomic) UIImageView *openIcon;
@property (retain, nonatomic) UIView *indicatorView;
@property (nonatomic) BOOL isOpen;
@property (retain, nonatomic) IESLiveUserCardStore *store;

- (void)openMoreTapped;
- (void).cxx_destruct;
- (id)initWithStore:(id)a0;
- (void)setup;

@end
