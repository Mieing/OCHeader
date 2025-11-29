@class UILabel, NSString;

@interface AWEUGActivityNoticeTitleView : UIView <AWEUGActivityNoticeTitleViewProtocol>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hideDescLabel;
- (void)startPullAnimation:(BOOL)a0;
- (void)setupBasicViews;
- (void).cxx_destruct;
- (id)init;
- (void)reset;

@end
