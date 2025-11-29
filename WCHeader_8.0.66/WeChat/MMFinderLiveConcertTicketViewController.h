@class UIView, NSString, NSArray, MMFinderLiveConcertRecentForwardScrollViewDelegateProxy, MMScrollActionSheet, UIImageView, MMFinderLiveConcertTicketViewControllerReportingContext, MMFinderLiveConcertTicketView, MMFinderLiveConcertTicketStyleItem, ForwardMessageLogicController, MMUIButton;
@protocol MMFinderLiveConcertTicketViewControllerDelegate;

@interface MMFinderLiveConcertTicketViewController : MMCPUIViewController <MMFinderLiveConcertTicketViewDelegate, MMScrollActionSheetDelegate, MMFinderLiveConcertRecentForwardScrollViewDelegate, ForwardMessageLogicDelegate, WCCommitViewResultDelegate>

@property (retain, nonatomic) MMFinderLiveConcertTicketStyleItem *styleItem;
@property (retain, nonatomic) UIImageView *backgroundView;
@property (retain, nonatomic) MMFinderLiveConcertTicketView *ticketView;
@property (retain, nonatomic) MMUIButton *shareButton;
@property (retain, nonatomic) UIView *bottomButtonsContainerView;
@property (retain, nonatomic) NSArray *bottomButtonsSeparators;
@property (retain, nonatomic) MMUIButton *nextStyleButton;
@property (retain, nonatomic) MMUIButton *saveImageButton;
@property (retain, nonatomic) MMScrollActionSheet *shareActionSheetForImageContent;
@property (retain, nonatomic) MMFinderLiveConcertRecentForwardScrollViewDelegateProxy *recentForwardDelegateProxyForImageContent;
@property (retain, nonatomic) MMScrollActionSheet *shareActionSheetForWebPageContent;
@property (retain, nonatomic) MMFinderLiveConcertRecentForwardScrollViewDelegateProxy *recentForwardDelegateProxyForWebPageContent;
@property (retain, nonatomic) ForwardMessageLogicController *forwardLogic;
@property (retain, nonatomic) MMFinderLiveConcertTicketViewControllerReportingContext *reportingContext;
@property (nonatomic) unsigned long long sourceScene;
@property (retain, nonatomic) MMUIButton *itemButton;
@property (copy, nonatomic) NSString *currentItemUrl;
@property (weak, nonatomic) id<MMFinderLiveConcertTicketViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSourceScene:(unsigned long long)a0 reportingContext:(id)a1;
- (void)updateWithTicketStyleItem:(id)a0 hasOtherStyles:(BOOL)a1;
- (void)playEntryAnimation;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)onShareButtonTapped;
- (void)onNextStyleButtonTapped;
- (void)onSaveImageButtonTapped;
- (void)onItemButtonTapped;
- (void)onTicketViewReadyForDisplay:(id)a0;
- (void)onTicketViewLoadFailed:(id)a0;
- (void)onTicketViewExternalNavigationRequested:(id)a0;
- (void)scrollActionSheet:(id)a0 didSelecteItem:(id)a1;
- (void)clickRFItemCallBack:(id)a0 proxy:(id)a1;
- (void)relayoutScrollSheetForProxy:(id)a0;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)a0;
- (void)OnForwardMessageCancel:(id)a0;
- (void)onDoneForwardForForwardView:(id)a0;
- (void)onCancelForwardForForwardView:(id)a0;
- (void)forwardViewControllerDidCancel:(id)a0;
- (void)forwardViewController:(id)a0 didFinishForwardingWithDataItem:(id)a1;
- (void)initializeComponents;
- (void)initializeShareActionSheetForImageContent;
- (void)initializeShareActionSheetForWebPageContent;
- (void)shareTicketWebPage;
- (void)shareTicketImage;
- (void)shareToChat:(id)a0 contentType:(unsigned long long)a1;
- (void)shareToMomentWithContentType:(unsigned long long)a0;
- (BOOL)needPageItem;
- (BOOL)webPageShareAvailable;
- (id)shareActionSheetForContentType:(unsigned long long)a0;
- (id)webPageShareUriForTarget:(unsigned long long)a0;
- (void).cxx_destruct;

@end
