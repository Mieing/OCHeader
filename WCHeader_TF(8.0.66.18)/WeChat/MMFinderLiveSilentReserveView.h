@class NSString, MMFinderLiveReserveViewModel;

@interface MMFinderLiveSilentReserveView : UIView <MMFinderLiveReserveViewModelObserver>

@property (retain, nonatomic) MMFinderLiveReserveViewModel *viewModel;
@property (copy, nonatomic) id /* block */ jsapiSuccessBlock;
@property (retain, nonatomic) NSString *reserveSucceededToastContent;
@property (retain, nonatomic) NSString *reserveFailedToastContent;
@property (retain, nonatomic) NSString *cancelReserveSucceededToastContent;
@property (retain, nonatomic) NSString *cancelReserveFailedToastContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithGetLiveNoticeResponse:(id)a0 fromVC:(id)a1;
- (void)setReportCommentScene:(id)a0 sceneNote:(id)a1 noticeBussinessDic:(id)a2;
- (void)reserveSilently;
- (void)onNeedDismissView;
- (void)onViewModelWorkFinished;
- (void).cxx_destruct;

@end
