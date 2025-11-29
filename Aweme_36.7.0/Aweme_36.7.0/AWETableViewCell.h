@interface AWETableViewCell : UITableViewCell

+ (id)dequeueReusableCellWithTableView:(id)a0 cellClass:(Class)a1;

- (void)setCellDelegate:(id)a0;
- (void)updateWithViewModel:(id)a0;

@end
