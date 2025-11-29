@class NSString, UIImageView, UILabel, IESLiveGradientView, IESLiveFeedDrawerHistoryOnlineModel;

@interface IESLiveFeedDrawerHistoryOnlineCell : UICollectionViewCell <IESLiveFeedDrawerHistoryCellProtocol>

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIImageView *closeImageView;
@property (retain, nonatomic) IESLiveGradientView *gradientView;
@property (retain, nonatomic) IESLiveFeedDrawerHistoryOnlineModel *model;
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
