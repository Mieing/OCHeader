@class NSString;

@interface WCPayLqtCellInfo : NSObject <NSCoding>

@property (nonatomic) int is_show_cell;
@property (retain, nonatomic) NSString *cell_icon;
@property (nonatomic) int is_open_lqt;
@property (retain, nonatomic) NSString *lqt_open_url;
@property (retain, nonatomic) NSString *lqt_title;
@property (retain, nonatomic) NSString *lqt_wording;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
