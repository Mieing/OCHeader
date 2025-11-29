@class UIImageView, MJSegmentViewModel, UIView, UILabel;
@protocol MJMetaEditGeographicPanelDelegate;

@interface MJMetaEditGeographicPanel : UIViewController

@property (retain, nonatomic) MJSegmentViewModel *segmentVM;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIImageView *icon;
@property (weak, nonatomic) id<MJMetaEditGeographicPanelDelegate> delegate;

- (id)initWithSegmentVM:(id)a0;
- (void)viewDidLoad;
- (void)setupViews;
- (void)updateDatas;
- (void).cxx_destruct;

@end
