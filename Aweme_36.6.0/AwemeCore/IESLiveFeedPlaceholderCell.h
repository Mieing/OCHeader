@class UILabel, NSString, UIView;
@protocol HTSLiveFeedCellDelegate, HTSLiveFeedItem;

@interface IESLiveFeedPlaceholderCell : UICollectionViewCell <HTSLiveFeedCellUpdater>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *leftLineView;
@property (retain, nonatomic) UIView *rightLineView;
@property (retain, nonatomic) id<HTSLiveFeedItem> item;
@property (nonatomic) BOOL isFeedDrawerMode;
@property (weak, nonatomic) id<HTSLiveFeedCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)remakeConstraints:(id)a0;
- (void)update:(id)a0 isFeedDrawer:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
