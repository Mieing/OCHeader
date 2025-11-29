@class NSString, UIImageView, UIView, UILabel, IESLiveFeedDrawerHistoryOfflineModel;

@interface IESLiveFeedDrawerHistoryOfflineCell : UICollectionViewCell <IESLiveFeedDrawerHistoryCellProtocol>

@property (retain, nonatomic) IESLiveFeedDrawerHistoryOfflineModel *model;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *closeImageView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *offlineDescLabel;
@property (copy, nonatomic) id /* block */ deleteHistoryCellBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)deleteHistory;

@end
