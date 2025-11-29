@class AWEAwemeModel, UIView, RACDisposable, NSString, UIImageView, NSDictionary, AWEPOIUGCRateFiveStarView, UIVisualEffectView, UILabel, AWEPOIGradeSelectableView;
@protocol AWEPOIUGCRateCardViewDelegate;

@interface AWEPOIUGCRateCardView : UIView <AWEPOIGradeSelectableViewDelegate>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (retain, nonatomic) UIVisualEffectView *blurEffectView;
@property (retain, nonatomic) UIView *firstBackgroundView;
@property (retain, nonatomic) UIView *closeView;
@property (retain, nonatomic) UIImageView *closeImageView;
@property (retain, nonatomic) UIView *gradeContainerView;
@property (retain, nonatomic) UIImageView *poiIconImageView;
@property (retain, nonatomic) UILabel *poiLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *tipsView;
@property (retain, nonatomic) UIView *tipsBackgroundView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) AWEPOIGradeSelectableView *gradeSelectableView;
@property (retain, nonatomic) AWEPOIUGCRateFiveStarView *fiveStarView;
@property (retain, nonatomic) RACDisposable *notificationDisposable;
@property (nonatomic) BOOL hasChangedGradeType;
@property (nonatomic) BOOL hasSelectedTag;
@property (copy, nonatomic) NSString *creationId;
@property (weak, nonatomic) id<AWEPOIUGCRateCardViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidDisposed;
- (void)updateWithAwemeModel:(id)a0 extraParams:(id)a1;
- (void)rateGradeDidSelected:(id)a0;
- (void)gradeSelectableView:(id)a0 rateGradeDidSelected:(id)a1;
- (void)closeRateCardView;
- (id)fetchCommonTrackParams;
- (void)p_setupGradeContainerView;
- (BOOL)isFromFamiliarWithParams:(id)a0;
- (void)updateA11y;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;
- (void)willDisplay;

@end
