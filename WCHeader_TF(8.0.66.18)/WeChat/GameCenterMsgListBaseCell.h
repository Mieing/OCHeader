@class MMHeadImageView, MMCPLabel, NSString, MMUILabel;

@interface GameCenterMsgListBaseCell : GameCenterMsgListRawBaseCell <RichTextLayoutDelegate>

@property (retain, nonatomic) MMHeadImageView *headView;
@property (retain, nonatomic) MMCPLabel *nickView;
@property (retain, nonatomic) MMUILabel *timeView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupGameCenterMsgListBaseCell;
- (void)updateWithCellData:(id)a0;
- (void)onClickHeadView;
- (void)onClickNickView;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
