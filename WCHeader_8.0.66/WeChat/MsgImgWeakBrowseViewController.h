@class NSString, ForwardMessageLogicController, CMessageWrap, SightIconView, MsgDataDownloadLogic, MMImageBrowseView;
@protocol MsgImgWeakBrowseViewControllerDelegate;

@interface MsgImgWeakBrowseViewController : MMUIViewController <MMImgageBrowseViewDelegate, ForwardMessageLogicDelegate, MsgDataDownloadDelegate>

@property (retain, nonatomic) CMessageWrap *messageWrap;
@property (nonatomic) BOOL playSound;
@property (nonatomic) long long type;
@property (retain, nonatomic) ForwardMessageLogicController *forwardMessageLogicController;
@property (retain, nonatomic) MsgDataDownloadLogic *imageDownloadLogic;
@property (retain, nonatomic) SightIconView *loadingView;
@property (retain, nonatomic) MMImageBrowseView *imageBrowseView;
@property (weak, nonatomic) id<MsgImgWeakBrowseViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMessageWrap:(id)a0 playSound:(BOOL)a1 type:(long long)a2;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)reloadData;
- (void)initExtensions;
- (void)initSubviews;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)isImageMessage;
- (id)image;
- (id)thumbImage;
- (double)maxSize;
- (void)onTapMoreBarButtonItem;
- (BOOL)canDownload;
- (void)downloadImage;
- (BOOL)canForward;
- (BOOL)canLocate;
- (void)onDownloadSuccess:(id)a0;
- (void)onDownloadExpireFail:(id)a0;
- (void)onDownloadCommonFail:(id)a0;
- (id)getCurrentViewController;
- (void)OnMsgRevoked:(id)a0 n64MsgId:(long long)a1;
- (void).cxx_destruct;

@end
