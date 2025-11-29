@class NSString, IESLiveGuidePaidLiveRecallView, NSMutableArray, NSNumber;

@interface IESLiveGuidePaidLiveRecallFragment : IESLiveGuideComponent <IESLiveGuideToolBarAction, IESLiveGuideInterceptEvent>

@property (weak, nonatomic) IESLiveGuidePaidLiveRecallView *view;
@property (retain, nonatomic) NSMutableArray *subscriberList;
@property (retain, nonatomic) NSNumber *showedIntercept;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)toolbarItemReloadFinished;
- (void)didChangedGuideIntercept:(BOOL)a0;
- (void)subscribePayLiveStatusMessage;
- (void)showPaidLiveRecallIfNeed:(BOOL)a0 isIgnoreRepeat:(BOOL)a1;
- (void)showPaidLiveRecall;
- (id)recallTypeString;
- (void)viewMountIfNeeded;
- (void)removePaidLiveRecallView;
- (id)globalBlockDetailModelWithOpenLiveModel:(id)a0;
- (void).cxx_destruct;

@end
