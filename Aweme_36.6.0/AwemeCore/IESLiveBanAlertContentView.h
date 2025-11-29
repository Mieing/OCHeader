@class IESLiveBanAlertContentViewConfig;

@interface IESLiveBanAlertContentView : UIView

@property (retain, nonatomic) IESLiveBanAlertContentViewConfig *config;
@property (copy, nonatomic) id /* block */ detailBlock;

- (void)onDetailLabelClicked;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)layoutUI;

@end
