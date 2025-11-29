@class AWEGeneralSearchPOIAnchorInfoModel, NSString, UIImageView, AWEAwemeModel, UILabel, NSDictionary;

@interface AWEModernFeedVideoFooterNativeView : UIView

@property (retain, nonatomic) UIImageView *anchorIcon;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEGeneralSearchPOIAnchorInfoModel *anchorInfoModel;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *searchId;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) BOOL isShowNative;
@property (nonatomic, getter=isSearchUIQualityAdaption) BOOL searchUIQualityAdaption;
@property (copy, nonatomic) NSString *searchKeyword;
@property (copy, nonatomic) NSDictionary *logData;
@property (copy, nonatomic) NSString *referString;

- (void)trackShowEvent;
- (void)didEndShowing;
- (void)didStartShowing;
- (id)p_getTrackParams;
- (void)sendShowEventIfNeeded;
- (void)singleTapped:(id)a0;
- (void)setModelOnly:(id)a0;
- (id)p_getLifeTrackParams;
- (void)updateUIWithSearchUIQualityAdaption:(BOOL)a0;
- (void)sendDismissEventIfNeeded;
- (id)searchUIQualityAnchorIconImage;
- (id)anchorIconImage;
- (void)updateUILayoutToAdaptSearchUIQuality;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
