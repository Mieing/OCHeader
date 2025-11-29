@class NSString, TingSharePlayButton, TingItem, UIView;

@interface WCListMusicCellViewNew : WCListBaseCellView <MMWebImageViewDelegate> {
    UIView *m_tailView;
}

@property (retain, nonatomic) TingItem *tingItem;
@property (retain, nonatomic) TingSharePlayButton *playButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)calculateHeightWithGroup:(id)a0 groupItem:(id)a1 width:(double)a2 isFirstOneInsection:(BOOL)a3 isLastOneInSection:(BOOL)a4;
+ (id)titleWithDataItem:(id)a0;
+ (id)trimDescWithDataItem:(id)a0;

- (double)maxLabelWidth;
- (double)tailViewHeight;
- (void)initTailView;
- (void)initView;
- (void)onClickEvent;
- (void).cxx_destruct;

@end
