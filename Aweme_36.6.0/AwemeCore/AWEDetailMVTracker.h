@class NSString, AWEDetailMVViewModel;

@interface AWEDetailMVTracker : NSObject <AWEDetailWelfareTrackDelegate, AWEDetailTrackerService>

@property (retain, nonatomic) AWEDetailMVViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEDetailCollectionModuleServiceDOUYINLiteAdaperClass;
+ (void)trackActivityEntranceShowWithModel:(id)a0;
+ (void)trackFavoriteIconShowWithParamDic:(id)a0;
+ (id)mvTypeWithParamDict:(id)a0;
+ (void)trackToolsEnterMvDetailPerformanceStartWithMvId:(id)a0 mvLokiId:(id)a1 mvType:(long long)a2 pageType:(id)a3 enterFrom:(id)a4;
+ (void)trackToolsEnterMvDetailPerformanceEndWithMvId:(id)a0 mvLokiId:(id)a1 mvType:(long long)a2 pageType:(id)a3 enterFrom:(id)a4 duration:(long long)a5 success:(BOOL)a6 error:(id)a7;
+ (void)trackToolsTemplateDetailFetchHeadInfoWithMvId:(id)a0 mvType:(long long)a1 success:(BOOL)a2 duration:(long long)a3 error:(id)a4;

- (void)trackEnterPersonalDetailWithModel:(id)a0;
- (void)trackClickLinkWithModel:(id)a0;
- (void)trackDetailPageClientShowWithModel:(id)a0;
- (void)trackClickedShootButton;
- (void)trackTemplateCollectStateWithTemplateID:(id)a0 templateType:(long long)a1 isCollectAction:(BOOL)a2 Error:(id)a3;
- (void)trackDetailPageExitWithMask;
- (void)trackDetailPagePullUp;
- (void)trackDetailPagePullDown;
- (id)initWithStateContext:(id)a0;
- (id)aAWEDetailCollectionModuleServiceDOUYINLiteAdaper;
- (id)shootEventParams;
- (void)trackMVCollect:(BOOL)a0;
- (void)welfareView:(id)a0 trackWelfareProjectClick:(id)a1;
- (void)welfareView:(id)a0 trackWelfareProjectMatchingShow:(id)a1;
- (void)trackEnterMvDetailPage;
- (void)trackFavoriteToastShow;
- (void).cxx_destruct;

@end
