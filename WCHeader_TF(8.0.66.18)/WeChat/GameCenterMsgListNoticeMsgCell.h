@class MMUILabel, MMUIView, MMWebImageView;

@interface GameCenterMsgListNoticeMsgCell : GameCenterMsgListBaseCell

@property (retain, nonatomic) MMWebImageView *postImageView;
@property (retain, nonatomic) MMUIView *textBackView;
@property (retain, nonatomic) MMUILabel *briefLabel;
@property (retain, nonatomic) MMUILabel *detailLabel;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupGameCenterMsgListNoticeMsgCell;
- (void)updateWithCellData:(id)a0;
- (void).cxx_destruct;

@end
