@class AWERVLVMetaInfoView;

@interface AWERVLVMetaInfoTableViewCell : UITableViewCell

@property (retain, nonatomic) AWERVLVMetaInfoView *metaInfoView;

+ (double)height;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
