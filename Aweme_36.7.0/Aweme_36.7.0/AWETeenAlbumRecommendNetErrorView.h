@class AWETeenAlbumDataController, AWEMinorAlbum, UIImageView, UILabel, UIButton;

@interface AWETeenAlbumRecommendNetErrorView : UIView

@property (retain, nonatomic) AWETeenAlbumDataController *dataController;
@property (retain, nonatomic) AWEMinorAlbum *albumModel;
@property (retain, nonatomic) UILabel *netErrorLabel;
@property (retain, nonatomic) UILabel *netRemindLabel;
@property (retain, nonatomic) UIButton *retryButton;
@property (retain, nonatomic) UIButton *solutionButton;
@property (retain, nonatomic) UIImageView *arrow;

- (void)p_retry;
- (void)p_showSolution;
- (id)initWithDataController:(id)a0 originAlbum:(id)a1;
- (void)p_setupUI;
- (void).cxx_destruct;

@end
