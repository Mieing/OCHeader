@class MMUIButton, NSString, UIView, TrackRoomHeadListItem, NSMutableDictionary, NSMutableArray, UILabel, UIScrollView;
@protocol TrackRoomTopBarViewDelegate;

@interface TrackRoomTopBarView : MMUIView <UIScrollViewDelegate, TrackRoomHeadListItemDelegate> {
    MMUIButton *_closeButton;
    MMUIButton *_minimizeButton;
    UILabel *_tipsLabel;
    UIView *_headListContainer;
    UIScrollView *_headList;
    NSMutableArray *_headListItems;
    TrackRoomHeadListItem *_selectedHeadListItem;
    BOOL _getMicSuccess;
    NSMutableDictionary *_tipsArray;
}

@property (weak, nonatomic) id<TrackRoomTopBarViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initView;
- (void)onCloseButtonClick:(id)a0;
- (void)onMinimizeButtonClick;
- (void)addHeadListItem:(id)a0 UpdateTitle:(BOOL)a1;
- (void)removeHeadListItem:(id)a0;
- (void)relayoutAllHeadListItem;
- (void)removeAllHeadListItem;
- (id)getHeadListItemByUsername:(id)a0;
- (void)clearEnterExitTips;
- (void)updateTitle;
- (void)updateTipsLabel:(id)a0 TextColor:(id)a1;
- (void)doUpdateStrategy;
- (void)setTipsAndUpdate:(id)a0 forOrder:(int)a1;
- (void)removeTipsForOrderAndUpdate:(int)a0;
- (void)gettingMic;
- (void)getMicFail;
- (void)getMicTimeout;
- (void)giveUpMic;
- (void)imTalking;
- (void)someoneTalking:(id)a0;
- (void)nobodyTalking;
- (void)someoneEnter:(id)a0 ShowTips:(BOOL)a1;
- (void)someoneLeave:(id)a0 ShowTips:(BOOL)a1;
- (void)reConnecting;
- (void)pause;
- (void)reStart;
- (void)openTalkOk;
- (void)selecteHeadListItem:(id)a0;
- (void)updateHeadItemAlpha:(id)a0;
- (void)onHeadListItemClick:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void).cxx_destruct;

@end
