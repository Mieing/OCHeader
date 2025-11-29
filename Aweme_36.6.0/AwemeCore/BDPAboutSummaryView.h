@class BDPImageView, UILabel, BDPUniqueID;

@interface BDPAboutSummaryView : UIView

@property (retain, nonatomic) BDPImageView *iconView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *summaryLabel;
@property (readonly, nonatomic) BDPUniqueID *uniqueID;

- (void)addGestureRecognizerToNameLabel:(id)a0;
- (void)addGestureRecognizerToIconView:(id)a0;
- (void)setName:(id)a0;
- (void)setIcon:(id)a0;
- (void)setSummary:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setUniqueID:(id)a0;
- (void)setUpUI;

@end
