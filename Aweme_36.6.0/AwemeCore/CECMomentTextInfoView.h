@class UILabel;

@interface CECMomentTextInfoView : UIView

@property (retain, nonatomic) UILabel *mainInfoLabel;
@property (retain, nonatomic) UILabel *subInfoLabel;
@property (nonatomic) BOOL isShowingOnTop;

- (id)initWithIsShowingOnTop:(BOOL)a0;
- (double)contentHeight;
- (void).cxx_destruct;

@end
