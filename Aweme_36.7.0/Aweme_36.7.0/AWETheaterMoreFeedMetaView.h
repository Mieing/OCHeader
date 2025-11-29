@class AWEAwemeModel, UIView, AWETheaterMoreFeedSectionItem, UIImageView, AWETheaterPageContext, BDImageView, DUXButton, UILabel;

@interface AWETheaterMoreFeedMetaView : UIView

@property (retain, nonatomic) AWETheaterPageContext *context;
@property (retain, nonatomic) AWETheaterMoreFeedSectionItem *sectionItem;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIImageView *quoteImageView;
@property (retain, nonatomic) UILabel *quoteLabel;
@property (retain, nonatomic) UIView *metaView;
@property (retain, nonatomic) DUXButton *collectionButton;
@property (retain, nonatomic) BDImageView *coverImageView;
@property (retain, nonatomic) DUXButton *appointmentButton;
@property (nonatomic) BOOL currentCollectStatus;
@property (nonatomic) BOOL currentAppointmentStatus;
@property (copy, nonatomic) id /* block */ collectionButtonTapped;
@property (copy, nonatomic) id /* block */ appointmentButtonTapped;

- (void)configWithSectionItem:(id)a0 context:(id)a1;
- (void)configCoverImage:(id)a0;
- (void)configActionButton:(id)a0;
- (void)updateCollectionStatus:(BOOL)a0;
- (void)updateAppointmentStatus:(id)a0;
- (void)collectionButtonAction;
- (void)appointmentButtonAction;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateBackgroundColor:(id)a0;
- (void)configureSubviews;

@end
