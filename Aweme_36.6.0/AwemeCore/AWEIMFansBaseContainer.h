@class AWEIMFansCellViewModel;

@interface AWEIMFansBaseContainer : UIView

@property (retain, nonatomic) AWEIMFansCellViewModel *viewModel;

- (void)configWithViewModel:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)init;
- (void)setupViews;
- (void)willDisplay;

@end
