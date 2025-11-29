@class ACCAIGCLoraProfileModel;

@interface AWEAILoraProfileRouter : NSObject

@property (retain, nonatomic) ACCAIGCLoraProfileModel *infoModel;
@property (nonatomic) BOOL sameModelId;

+ (id)preLoadAIGCLibraryDataWith:(id)a0 isFromInspiration:(BOOL)a1;
+ (void)handleNoticeRouterWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)realPresentLoraProfileDetailPage:(id)a0 enterScene:(long long)a1 showStatus:(long long)a2 shootWay:(id)a3 isLoraUGC:(BOOL)a4 fusionEnterType:(long long)a5 disableDismissDuration:(BOOL)a6 dismissBlock:(id /* block */)a7 afterDismissConfirmBlock:(id /* block */)a8;
+ (void)enterManagerLoraInfoVCFollowCurrentTheme;
+ (void)trackHandleClickNoticeWith:(id)a0 startTime:(double)a1 sameModelId:(BOOL)a2 roleStatus:(long long)a3;
+ (void)realPresentLoraProfileDetailPage:(id)a0 enterScene:(long long)a1 showStatus:(long long)a2 shootWay:(id)a3 isLoraUGC:(BOOL)a4;
+ (void)realPresentLoraProfileDetailPage:(id)a0 enterScene:(long long)a1 showStatus:(long long)a2 isLoraUGC:(BOOL)a3;
+ (id)createDetailInfoVC:(long long)a0;
+ (void)realPresentAIGCLibraryPage:(id)a0 dismissBlock:(id /* block */)a1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)dealloc;

@end
