@class NSString, AWEAwemeModel, UILabel, UIView, AWEDCFeedPageContext;

@interface AWEDCFeedCreationUserNameResource : NSObject <AWEDCFeedCellElementResourceProtocol>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *userNameLabel;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (weak, nonatomic) AWEDCFeedPageContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithModel:(id)a0;
- (void)themeDidChange:(long long)a0;
- (id)classNameWithReferString;
- (void)didTapUser;
- (double)userNameLabelFontSize;
- (id)userNameLabelColor;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)reset;
- (struct CGSize { double x0; double x1; })size;
- (void)setupViews;

@end
