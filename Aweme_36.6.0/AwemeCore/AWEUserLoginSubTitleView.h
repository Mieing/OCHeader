@class UILabel, NSString, AWEUserComponentSubtitleModel;

@interface AWEUserLoginSubTitleView : UIView

@property (retain, nonatomic) UILabel *subTitleLabel;
@property (copy, nonatomic) NSString *subTitle;
@property (retain, nonatomic) AWEUserComponentSubtitleModel *model;

- (id)initWithSubTitle:(id)a0;
- (void)setupUIWithModel;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;

@end
