@class NSMutableArray, MMUILabel, ChatBotSnapLinksCellData;

@interface ChatBotSnapshotCell : UICollectionViewCell

@property (retain, nonatomic) MMUILabel *originLabel;
@property (retain, nonatomic) MMUILabel *dateLabel;
@property (retain, nonatomic) MMUILabel *countLabel;
@property (retain, nonatomic) ChatBotSnapLinksCellData *data;
@property (retain, nonatomic) NSMutableArray *imageViews;

- (void)layoutSubviews;
- (void)setCellData:(id)a0;
- (void)layoutCell;
- (void)resetContentViews;
- (void)prepareForReuse;
- (id)formatTimestampToDateString:(double)a0;
- (void).cxx_destruct;

@end
