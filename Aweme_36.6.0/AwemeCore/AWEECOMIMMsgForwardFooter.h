@class NSString, AWEECOMIMCustomButton;

@interface AWEECOMIMMsgForwardFooter : UITableViewHeaderFooterView

@property (retain, nonatomic) AWEECOMIMCustomButton *showMoreButton;
@property (copy, nonatomic) NSString *moreTitle;
@property (nonatomic) BOOL isExpand;
@property (copy, nonatomic) id /* block */ clickMoreBlock;

+ (id)reuseIdentifier;

- (void)onClickShowMore;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;
- (void)setupUI;

@end
