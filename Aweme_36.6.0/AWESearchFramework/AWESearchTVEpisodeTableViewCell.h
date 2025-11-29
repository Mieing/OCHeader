@class NSArray, NSMutableArray;

@interface AWESearchTVEpisodeTableViewCell : UITableViewCell

@property (retain, nonatomic) NSMutableArray *buttonArray;
@property (retain, nonatomic) NSMutableArray *vipLabelArray;
@property (retain, nonatomic) NSArray *modelArray;
@property (copy, nonatomic) id /* block */ buttonClickedBlock;

+ (double)tableCellHeight;

- (void)updatePaymentStatus:(id)a0 withLabel:(id)a1;
- (void)updateButtonFrame;
- (void)configEpisodeList:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)buttonTapped:(id)a0;

@end
