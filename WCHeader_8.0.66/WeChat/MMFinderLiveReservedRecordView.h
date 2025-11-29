@class WCFinderContact, WCFinderAuthInfoIconView, MMWebImageView, UILabel, UIView;
@protocol MMFinderLiveReservedRecordViewDelegate;

@interface MMFinderLiveReservedRecordView : WCFinderLiveNoticeView

@property (retain, nonatomic) UIView *reservedAnchorInfoView;
@property (retain, nonatomic) MMWebImageView *reservedAnchorAvatarView;
@property (retain, nonatomic) UILabel *reservedAnchorNicknameLabel;
@property (retain, nonatomic) WCFinderAuthInfoIconView *reservedAuthorizedIconView;
@property (weak, nonatomic) id<MMFinderLiveReservedRecordViewDelegate> delegate;
@property (retain, nonatomic) WCFinderContact *anchorContact;

+ (double)heightForReservedRecordView:(id)a0 nextLiveNoticeInfo:(id)a1 anchorContact:(id)a2 width:(double)a3;
+ (double)getTopLabelHeight:(BOOL)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)resetState;
- (void)configureForReservedRecord;
- (void)setupReservedRecordSubviews;
- (void)layoutSubviews;
- (void)layoutNoticeInfoReservedRecord;
- (void)layoutNextLiveReservedRecord;
- (void)layoutAnchorInfoSubviews;
- (void)updateWithNoticeInfo:(id)a0 anchorContact:(id)a1;
- (void)updateWithNextLiveNoticeInfo:(id)a0 anchorContact:(id)a1;
- (void)updateAnchorInfo;
- (void)onMainNoticeButtonClicked:(id)a0;
- (void)onAnchorInfoTapped;
- (void)setShowCoveredStyle:(BOOL)a0;
- (void).cxx_destruct;

@end
