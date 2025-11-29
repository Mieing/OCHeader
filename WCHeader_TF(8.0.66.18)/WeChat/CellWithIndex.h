@class UITableViewCell;

@interface CellWithIndex : NSObject

@property (retain, nonatomic) UITableViewCell *m_cell;
@property (nonatomic) long long m_index;

- (id)initWithCell:(id)a0 andIndex:(long long)a1;
- (void).cxx_destruct;

@end
