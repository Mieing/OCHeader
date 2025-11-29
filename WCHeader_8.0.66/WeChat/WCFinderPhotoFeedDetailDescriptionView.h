@class NSString, WCFinderFeedContentVM, WCFinderMaskButton, WCFinderFeedContentTouchExpandTextView, UILabel;
@protocol WCFinderFeedDescriptionViewDelegate;

@interface WCFinderPhotoFeedDetailDescriptionView : UIView <WCFinderFeedContentTextClickActionDelegate>

@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (retain, nonatomic) WCFinderFeedContentTouchExpandTextView *textView;
@property (retain, nonatomic) WCFinderMaskButton *eventButton;
@property (retain, nonatomic) WCFinderMaskButton *poiButton;
@property (retain, nonatomic) WCFinderMaskButton *redPacketLinkButton;
@property (nonatomic) struct CGPoint { double x; double y; } hitPoint;
@property (retain, nonatomic) WCFinderMaskButton *collectionButton;
@property (retain, nonatomic) UILabel *ipRegionAndPostTimeLabel;
@property (weak, nonatomic) id<WCFinderFeedDescriptionViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)layoutSubviews;
- (void)layoutView;
- (void)updateWithContentVM:(id)a0;
- (void)resetTrucation;
- (BOOL)hasRedPacketLink;
- (void)clickPOIAction:(id)a0;
- (void)clickEventAction:(id)a0;
- (void)clickLinkAction:(id)a0;
- (void)clickCollectionAction:(id)a0;
- (void)onFeedContentTextView:(id)a0 clickReadMore:(BOOL)a1 isTouchExpand:(BOOL)a2;
- (void)onFeedContentTextView:(id)a0 longPressedText:(id)a1 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (BOOL)canBecomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)onFeedContentTextView:(id)a0 clickText:(id)a1 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)onFeedContentTextView:(id)a0 clickTopicText:(id)a1;
- (void)onFeedContentTextView:(id)a0 clickMentionUsername:(id)a1 nickname:(id)a2;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)copyText:(id)a0;
- (void)onFeedContentTextView:(id)a0 clickContentUserName:(id)a1;
- (void).cxx_destruct;

@end
