@interface AWELiveHotPointPanelTableViewCell : AWEHotPointPanelTableViewCell

+ (id)reuseIdentifier;
+ (double)cellHeight;

- (void)configureUI;
- (void)configureWithModel:(id)a0 indexPath:(id)a1 inChannel:(BOOL)a2 needNewDesc:(BOOL)a3;
- (BOOL)shouldShowCustomizedLabel;
- (void)configRelatedLabel:(id)a0;

@end
