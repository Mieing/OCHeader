@class DUXBaseLabel, NSString;

@interface AWENewsAISmartDislikeCell : UICollectionViewCell

@property (retain, nonatomic) DUXBaseLabel *itemLabel;
@property (nonatomic) BOOL hasClick;
@property (copy, nonatomic) NSString *itemText;

+ (id)reuseIdentifier;

- (void)configWithTitle:(id)a0 width:(double)a1 height:(double)a2;
- (void)updateClickState;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
