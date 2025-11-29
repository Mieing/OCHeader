@class UIViewController, NSString, FinderLiveNoticeInfo, NSDictionary, FinderGetLiveNoticeResponse, FinderContact, WCFinderLiveAudienceNoticeReporter;
@protocol MMFinderLiveReserveViewModelObserver;

@interface MMFinderLiveReserveViewModel : NSObject <WCActionSheetDelegate>

@property (retain, nonatomic) FinderGetLiveNoticeResponse *reserveResponse;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSString *noticeId;
@property (retain, nonatomic) FinderLiveNoticeInfo *liveNoticeInfo;
@property (retain, nonatomic) FinderContact *selfContact;
@property (nonatomic) BOOL canFinished;
@property (nonatomic) BOOL isActionButtonWorking;
@property (nonatomic) BOOL isRequesting;
@property (retain, nonatomic) NSString *gMsgID;
@property (retain, nonatomic) WCFinderLiveAudienceNoticeReporter *reserveActionReporter;
@property (weak, nonatomic) id<MMFinderLiveReserveViewModelObserver> observer;
@property (weak, nonatomic) UIViewController *fromVC;
@property (readonly, nonatomic) NSString *headerImageUrl;
@property (readonly, nonatomic) NSString *finderName;
@property (readonly, nonatomic) NSString *reserveLiveTime;
@property (readonly, nonatomic) NSString *reserveIntroduction;
@property (readonly, nonatomic) NSString *actionButtonTitle;
@property (readonly, nonatomic) unsigned long long authIconType;
@property (readonly, nonatomic) unsigned long long reserveStatus;
@property (retain, nonatomic) NSString *reserveSucceededToastContent;
@property (retain, nonatomic) NSString *reserveFailedToastContent;
@property (retain, nonatomic) NSString *cancelReserveSucceededToastContent;
@property (retain, nonatomic) NSString *cancelReserveFailedToastContent;
@property (retain, nonatomic) NSString *commentScene;
@property (retain, nonatomic) NSString *sceneNote;
@property (retain, nonatomic) NSDictionary *noticeBussinessDic;
@property (nonatomic) unsigned long long finishStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithGetLiveNoticeResponse:(id)a0 gMsgID:(id)a1;
- (void)loadLiveReserveData;
- (void)initFinishStatusWhenViewAppear;
- (void)onTappedLiveActionButton;
- (void)requestViewModelFinishedFromView;
- (void)finishedWork;
- (void)reportReserveAction:(long long)a0;
- (void)actionSheet:(id)a0 didDismissWithButtonIndex:(long long)a1;
- (void).cxx_destruct;

@end
