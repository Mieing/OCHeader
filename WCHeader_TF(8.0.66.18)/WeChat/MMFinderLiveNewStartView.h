@class UIView, NSString, NSArray, UITapGestureRecognizer, MMLiveTaskId, UIPinchGestureRecognizer, MMLiveNoticeSelectButton, CAGradientLayer, UICollectionView, WCFinderHeadImageView, MMUIButton, UILabel;
@protocol MMFinderLiveNewStartViewDelegate;

@interface MMFinderLiveNewStartView : UIView <MMFinderLiveMgrExt, UICollectionViewDelegate, UICollectionViewDataSource, UIGestureRecognizerDelegate>

@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (retain, nonatomic) NSString *topicString;
@property (retain, nonatomic) NSString *topicPlaceHolder;
@property (retain, nonatomic) NSArray *controlItems;
@property (retain, nonatomic) NSString *bottomNoticeText;
@property (nonatomic) BOOL bottomNoticeEnableClick;
@property (retain, nonatomic) UIView *gradientView;
@property (retain, nonatomic) UIPinchGestureRecognizer *pinchGesture;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) CAGradientLayer *topGradientLayer;
@property (retain, nonatomic) MMUIButton *closeButton;
@property (retain, nonatomic) WCFinderHeadImageView *coverImageView;
@property (retain, nonatomic) UIView *topicContainer;
@property (retain, nonatomic) UILabel *topicLabel;
@property (retain, nonatomic) UILabel *changeTopicLabel;
@property (retain, nonatomic) CAGradientLayer *bottomGradientLayer;
@property (retain, nonatomic) UICollectionView *controlButtonPanel;
@property (retain, nonatomic) MMLiveNoticeSelectButton *noticeSelectButton;
@property (retain, nonatomic) MMUIButton *startLiveButton;
@property (weak, nonatomic) id<MMFinderLiveNewStartViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0;
- (void)layoutSubviews;
- (void)initGesture;
- (void)handleTapGesture;
- (void)handlePinchGesture;
- (void)updateTopicLabelWithBulletinInfo:(id)a0 placeHolder:(id)a1;
- (void)updateControlPanelWithItems:(id)a0;
- (void)updateBottomNoticeText:(id)a0 enableClick:(BOOL)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)layoutUI;
- (void)layoutGradientLayer;
- (void)layoutTopArea;
- (void)layoutTopicLabel;
- (void)layoutBottomArea;
- (void)layoutStartArea;
- (BOOL)canShowNoticeBtn;
- (id)liveTask;
- (BOOL)isPortrait;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mainVideoFrame;
- (double)startAreaTop;
- (double)controlPanelItemPadding;
- (struct CGSize { double x0; double x1; })controlPanelSize;
- (double)getBottomControlAreaTop;
- (double)getAudioRoomInfoViewTop;
- (void).cxx_destruct;

@end
