@class UILongPressGestureRecognizer, WCFinderContinueCollectionModel, UILabel, MMWebImageView, UITapGestureRecognizer;
@protocol WCFinderCollectionInfoViewDelegate;

@interface WCFinderCollectionInfoView : UIView

@property (retain, nonatomic) WCFinderContinueCollectionModel *model;
@property (retain, nonatomic) MMWebImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UITapGestureRecognizer *tapGes;
@property (retain, nonatomic) UILongPressGestureRecognizer *longGes;
@property (weak, nonatomic) id<WCFinderCollectionInfoViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWatchingCollectionModel:(id)a0;
- (void)updateLayoutView;
- (void)reportExposer;
- (void)gotoCollection;
- (void)goCollectionFeedListWithDataFetcher:(id)a0 destinationFeedID:(id)a1 autoPresentCollectionHalfScreen:(BOOL)a2 username:(id)a3;
- (void)handleLongPress:(id)a0;
- (void).cxx_destruct;

@end
