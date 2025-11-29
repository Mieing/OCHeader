@class UIView, NSString, HTSEventContext, NSArray, HTSLiveImage, IESLiveActivityDetailView, NSDictionary, RACCommand, IESLiveGiftPanelDataSharing, PageInfoBar;
@protocol IESHYContainerProtocol, IESLiveSubscription, IESLiveRoomService, IESLiveGiftPanelReaction;

@interface IESLiveActivityDetailItem : IESLiveRefactGiftPanelSectionViewModel <IESLiveRefactGiftPanelEventAction, IESLiveCollectionViewItemProtocol>

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) IESLiveGiftPanelDataSharing *giftPanelDataSharing;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *hybridContainer;
@property (retain, nonatomic) NSString *schema;
@property (nonatomic) long long currentPageType;
@property (copy, nonatomic) NSString *currentRecivierUid;
@property (retain, nonatomic) id<IESLiveSubscription> giftChangeDisposiable;
@property (retain, nonatomic) id<IESLiveSubscription> recivierChangeDisposiable;
@property (retain, nonatomic) id<IESLiveSubscription> giftPageTypeDisposable;
@property (retain, nonatomic) id<IESLiveSubscription> giftPageTopicDisposable;
@property (nonatomic) BOOL enableProgressBarDisplayInActivityTab;
@property (nonatomic) BOOL isBindingProgressBarData;
@property (retain, nonatomic) PageInfoBar *progressBar;
@property (copy, nonatomic) NSDictionary *trackerExtra;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (weak, nonatomic) IESLiveActivityDetailView *activityDetailView;
@property (copy, nonatomic) NSArray *iconImageUrls;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *titleImageUrl;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *buttonText;
@property (retain, nonatomic) HTSLiveImage *backgroundImage;
@property (nonatomic) BOOL liveGiftPanelNewArchitecture;
@property (copy, nonatomic) id /* block */ messageUpdateBlock;
@property (copy, nonatomic) id /* block */ giftActivityDataUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) Class cellClass;
@property (nonatomic) struct CGSize { double width; double height; } cellSize;
@property (nonatomic) BOOL enable;
@property (retain, nonatomic) RACCommand *didSelectItemCommand;
@property (weak, nonatomic) id<IESLiveGiftPanelReaction> reaction;

- (void)didSetAttachingDIContext;
- (void)gpe_didGiftPanelCollectionVMsUpdate;
- (id)lynxSchema;
- (id)createSectionView;
- (void)updateWithPageInfo:(id)a0;
- (void)refreshProgressBarDataBindStatusWithForceUnbind:(BOOL)a0;
- (void)trackerActivityDetailShow;
- (void)observeTopicChange;
- (void)bindProgressBarData;
- (void)unbindProgressBarData;
- (void)updateWithUid:(id)a0;
- (id)initWithGiftPanelDataSharing:(id)a0;
- (void)tapActivityEntrance;
- (void)trackerActivityDetailClick;
- (void)setUp;
- (void).cxx_destruct;
- (void)dealloc;

@end
