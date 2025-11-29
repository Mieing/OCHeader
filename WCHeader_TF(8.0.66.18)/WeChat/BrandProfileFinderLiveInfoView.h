@class MMFinderLiveNoticeViewLogic, BizVideoFinderInfo, NSString, UIView, BizProfileV2Resp_FinderLiveNoticeInfoV2, WCFinderLiveNoticeView;
@protocol BrandProfileFinderLiveInfoViewDelegate;

@interface BrandProfileFinderLiveInfoView : UIView <MMFinderLiveNoticeViewLogicDelegate>

@property (retain, nonatomic) UIView *topHorizontalSperatorLineView;
@property (retain, nonatomic) WCFinderLiveNoticeView *liveNoticeView;
@property (retain, nonatomic) UIView *bottomHorizontalSperatorLineView;
@property (retain, nonatomic) MMFinderLiveNoticeViewLogic *noticeLogic;
@property (retain, nonatomic) BizVideoFinderInfo *finderInfo;
@property (retain, nonatomic) BizProfileV2Resp_FinderLiveNoticeInfoV2 *liveInfoData;
@property (weak, nonatomic) id<BrandProfileFinderLiveInfoViewDelegate> delegate;
@property (nonatomic) BOOL showBrandManagerMode;
@property (copy, nonatomic) id /* block */ refreshBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)updateWithFinderInfo:(id)a0 liveInfoData:(id)a1;
- (void)reloadDataForLiveNoticeView;
- (void)setupUI;
- (void)layoutSubviews;
- (double)estimateHeight;
- (BOOL)hasLiveNotice;
- (BOOL)hasNextLiveNotice;
- (BOOL)isAuthorPerspective;
- (id)getViewController;
- (void)onFinderLiveNoticeReserved:(BOOL)a0;
- (void)onFinderLiveNoticeInfoModified:(id)a0;
- (void)onFinderLiveNoticeInfoDidRevoked:(id)a0;
- (void)onFinderLiveNoticeTopStateDidChanged;
- (void)refreshUI;
- (void)reloadData;
- (void).cxx_destruct;

@end
