@class NSArray, AWEProfileHeaderContext, UIView, UIButton;
@protocol AWEProfileHeaderTagAreaCellDelegate;

@interface AWEProfileHeaderTagAreaCell : UICollectionViewCell

@property (retain, nonatomic) AWEProfileHeaderContext *context;
@property (copy, nonatomic) NSArray *tagListArray;
@property (nonatomic) long long foldStateLastIndex;
@property (weak, nonatomic) UIView *foldStateLastView;
@property (retain, nonatomic) UIButton *moreButton;
@property (weak, nonatomic) id<AWEProfileHeaderTagAreaCellDelegate> delegate;

- (id)refer;
- (id)joinEnterpriseParamsIfNeeded:(id)a0 aweme:(id)a1;
- (id)padService;
- (void)configWithHeaderContext:(id)a0;
- (BOOL)onTapCustomActionWithModel:(id)a0 sender:(id)a1;
- (BOOL)schoolCustomAction;
- (BOOL)realNameCustomAction:(id)a0;
- (BOOL)businessHoursCustomAction:(id)a0;
- (BOOL)showMapCustomAction;
- (BOOL)officialWebsiteCustomAction:(id)a0;
- (BOOL)officialPhoneNumCustomAction:(id)a0 sender:(id)a1;
- (BOOL)browseLocationsCustomAction:(id)a0;
- (BOOL)downloadLinkCustomAction:(id)a0;
- (BOOL)openUrlCustomAction:(id)a0;
- (BOOL)poiBookingCustomAction;
- (BOOL)businessGuideCustomAction;
- (BOOL)isSchoolStoryEnabled;
- (id)realNameUrl;
- (void)showRealNameDialogWithModel:(id)a0;
- (void)transferBusinessEditPage;
- (id)getBTMChainStringWhenTransferWithSender:(id)a0;
- (id)tagViewWithModel:(id)a0;
- (id)replaceTagListArray:(id)a0 withOriginAdInfo:(id)a1;
- (id)generateTagList;
- (double)configTagViews:(id)a0 shouldShowView:(BOOL)a1 isMore:(BOOL)a2;
- (void)onTapMoreButton:(id)a0;
- (double)estimateHeightWithHeaderContext:(id)a0;
- (void).cxx_destruct;
- (double)containerWidth;

@end
