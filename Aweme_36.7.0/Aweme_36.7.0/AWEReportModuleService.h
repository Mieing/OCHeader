@class NSMutableDictionary, NSString, AWEProgressLoadingView, UITapGestureRecognizer;

@interface AWEReportModuleService : HTSService <AWEReportModuleService>

@property (retain, nonatomic) NSMutableDictionary *cachedResponse;
@property (retain, nonatomic) AWEProgressLoadingView *indicator;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reportWithType:(unsigned long long)a0 objectID:(id)a1 ownerID:(id)a2 extraParam:(id)a3;
- (void)reportWithType:(unsigned long long)a0 objectID:(id)a1 ownerID:(id)a2;
- (void)reportWithType:(unsigned long long)a0 objectID:(id)a1 ownerID:(id)a2 commomQueryParam:(id)a3 extraParam:(id)a4;
- (void)reportWithType:(unsigned long long)a0 reportInfo:(id)a1;
- (void)recordReportSuccess;
- (void)presentActionSheetWithType:(unsigned long long)a0 objectID:(id)a1 ownerID:(id)a2 beforeReport:(id /* block */)a3 beforeCancel:(id /* block */)a4 completion:(id /* block */)a5;
- (id)requestStringForType:(unsigned long long)a0;
- (void)reportWithType:(unsigned long long)a0 objectID:(id)a1 ownerID:(id)a2 reason:(long long)a3 completion:(id /* block */)a4;
- (void)loadReportTypesWithType:(id)a0 completion:(id /* block */)a1;
- (void)_reportWithType:(unsigned long long)a0 objectID:(id)a1 ownerID:(id)a2 content:(id)a3 roomID:(id)a4 isSpam:(BOOL)a5;
- (void)reportWithType:(unsigned long long)a0 objectID:(id)a1 ownerID:(id)a2 content:(id)a3 roomID:(id)a4 isSpam:(BOOL)a5 commonParam:(id)a6 extraParam:(id)a7;
- (void)reportV2WithType:(unsigned long long)a0 objectID:(id)a1 ownerID:(id)a2 content:(id)a3 roomID:(id)a4 isSpam:(BOOL)a5 commonParam:(id)a6 extraParam:(id)a7;
- (void)reportTogetherSeeWithObjectID:(id)a0 ownerID:(id)a1 extraParam:(id)a2;
- (void)newReportIMWithType:(unsigned long long)a0 objectID:(id)a1 ownerID:(id)a2 extraParam:(id)a3;
- (void)newReportUserWithObjectID:(id)a0 ownerID:(id)a1 extraParam:(id)a2;
- (void)presentActionSheetWithType:(unsigned long long)a0 objectID:(id)a1 ownerID:(id)a2 completion:(id /* block */)a3;
- (void)reportPiratedMusicWithID:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)showIndicator;
- (void)hideIndicator;

@end
