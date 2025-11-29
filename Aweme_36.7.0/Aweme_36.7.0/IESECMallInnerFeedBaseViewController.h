@class NSString, UICollectionView, IESECMallInnerFeedNode, UIView, IESECTracker;
@protocol IESECMallFeedContainerViewProtocol;

@interface IESECMallInnerFeedBaseViewController : UIViewController <IESECMallInnerFeedContainerViewDelegate>

@property (retain, nonatomic) IESECTracker *tracker;
@property (retain, nonatomic) IESECMallInnerFeedNode *node;
@property (retain, nonatomic) UIView<IESECMallFeedContainerViewProtocol> *containerView;
@property (nonatomic) unsigned long long displayTime;
@property (nonatomic) unsigned long long timeOnPage;
@property (readonly, nonatomic) UICollectionView *collectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)commonParams;
- (id)initWithFeedNode:(id)a0;
- (id)cartEntranceBtmID:(BOOL)a0;
- (id)getBtmIDWithContentClickEnterNewPage:(BOOL)a0 index:(id)a1;
- (id)getBtmIDWithActionType:(long long)a0 customType:(unsigned long long)a1 index:(long long)a2 enterNewPage:(BOOL)a3;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (long long)preferredStatusBarStyle;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)loadView;
- (id)labelInfo;
- (void)setupUI;

@end
