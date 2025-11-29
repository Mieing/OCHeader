@class NSString, UIImageView, UILabel, UITapGestureRecognizer;
@protocol HTSLiveFeedCellDelegate, IESLiveURLSchemaHandler, HTSLiveFeedItem;

@interface IESLiveFeedLiveRecordCell : UICollectionViewCell <HTSLiveFeedCellUpdater>

@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *secondLineLabel;
@property (retain, nonatomic) id<IESLiveURLSchemaHandler> urlHandler;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecoginzer;
@property (retain, nonatomic) id<HTSLiveFeedItem> item;
@property (retain, nonatomic) UILabel *thirdLineLabel;
@property (nonatomic) BOOL isFeedDrawerMode;
@property (weak, nonatomic) id<HTSLiveFeedCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightForAnnouncemenet:(id)a0 containerWidth:(double)a1;
+ (id)createAnnouncementLabel;
+ (double)announcementWidthWithContainerWidth:(double)a0;
+ (double)heightForItem:(id)a0 containerWidth:(double)a1;

- (void)didClickCell;
- (void)update:(id)a0 isFeedDrawer:(BOOL)a1;
- (void)onTapAvatar:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
