@class UICollectionView, AWELiveAnnouncement, NSDictionary, UILabel, UIButton, UIView, CAGradientLayer, NSString, AWELiveSearchModel, AWEGeneralSearchScrollTailView, UICollectionViewFlowLayout, NSArray, UIImageView;
@protocol AWEHttpTask;

@interface AWESearchLiveAppointmentLiveListView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIImageView *infoIcon;
@property (retain, nonatomic) UILabel *infoLabel;
@property (retain, nonatomic) UIButton *makeAppointmentButton;
@property (retain, nonatomic) UIImageView *arrowIcon;
@property (retain, nonatomic) UIButton *infoAreaButton;
@property (retain, nonatomic) UICollectionView *liveListView;
@property (retain, nonatomic) UICollectionViewFlowLayout *collectionViewLayout;
@property (retain, nonatomic) AWEGeneralSearchScrollTailView *footerView;
@property (nonatomic) BOOL isTransfering;
@property (retain, nonatomic) NSArray *productArray;
@property (retain, nonatomic) AWELiveAnnouncement *liveAnnouncement;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) AWELiveSearchModel *liveSearchModel;
@property (weak, nonatomic) id<AWEHttpTask> task;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *searchId;
@property (nonatomic) long long rank;
@property (retain, nonatomic) NSDictionary *logExtraDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightForModel:(id)a0 containerWidth:(double)a1;
+ (double)cellWidthWithContentWidth:(double)a0;

- (BOOL)hasShowAppointmentButton;
- (void)makeAppointment:(id)a0;
- (void)infoAreaClicked:(id)a0;
- (void)trackClickEventWithButtonType:(id)a0;
- (void)jumpDetailPage;
- (void)updateAppointmentButtonStatus;
- (void)trackLiveSdkLogWithEventName:(id)a0;
- (void)trackClickEventWithButtonType:(id)a0 withAdditionalParam:(id)a1;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)layoutSubviews;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)updateWithModel:(id)a0;
- (void)initUI;

@end
