@class IESLiveUploadBandwidthProberHeaderView, NSString, IESLiveClarityChooseView, IESLiveUploadBandwidthProberDisplayViewModel;
@protocol IESLiveUploadBandwidthProberViewDelegate;

@interface IESLiveUploadBandwidthProberView : UIView <IESLiveClarityChooseViewDelegate, IESLiveUploadBandwidthProberDisplayViewModelDelegate>

@property (retain, nonatomic) IESLiveClarityChooseView *chooseView;
@property (retain, nonatomic) IESLiveUploadBandwidthProberHeaderView *headerView;
@property (retain, nonatomic) IESLiveUploadBandwidthProberDisplayViewModel *viewModel;
@property (nonatomic) BOOL enableShowRecommend;
@property (weak) id<IESLiveUploadBandwidthProberViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hideClarityChooseSheet;
- (void)clarityChooseView:(id)a0 didSelectItems:(id)a1;
- (void)datasourceDidUpdate;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)setupUI;

@end
