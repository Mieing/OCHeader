@class DVEVCContext, NSString, AWEVideoPublishViewModel, ACCEditViewControllerInputData, ACCChapterTrackManager;
@protocol IESServiceProvider;

@interface ACCChapterViewModel : NSObject <ACCChapterViewModelProtocol>

@property (retain, nonatomic) ACCEditViewControllerInputData *inputData;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (readonly, weak, nonatomic) AWEVideoPublishViewModel *repoContainer;
@property (readonly, nonatomic) BOOL shouldShowChapterButton;
@property (weak, nonatomic) DVEVCContext *vcContext;
@property (retain, nonatomic) ACCChapterTrackManager *trackManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackEvent:(id)a0 eventParam:(id)a1 needCommonParams:(BOOL)a2;
- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;

@end
