@class NSArray, UIImageView, CAShapeLayer, UILabel, UIView;

@interface AWEQuickStorySaveTableViewCell : UITableViewCell

@property (retain, nonatomic) UIView *saveLocalView;
@property (retain, nonatomic) UIView *saveDraftView;
@property (retain, nonatomic) UIView *savePersonalView;
@property (retain, nonatomic) UILabel *downloadingLabel;
@property (retain, nonatomic) UIImageView *downloadingImageView;
@property (retain, nonatomic) UIView *loadingView;
@property (retain, nonatomic) CAShapeLayer *loadingLayer;
@property (retain, nonatomic) NSArray *dataSource;

- (void)addSubiewToContentWithView:(id)a0;
- (void)saveLocalClicked;
- (void)saveDraftClicked;
- (void)savePersonalClicked;
- (void)setUpUIWithData:(id)a0;
- (void)p_addLoadingViewIfNeeded;
- (void)downloadStart;
- (void)downloadComplete;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateProgress:(double)a0;

@end
