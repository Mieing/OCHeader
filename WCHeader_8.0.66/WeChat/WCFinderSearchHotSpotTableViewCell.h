@class NSString, UILabel, RichTextView, UIView;

@interface WCFinderSearchHotSpotTableViewCell : UITableViewCell <RichTextLayoutDelegate>

@property (weak, nonatomic) UIView *containerView;
@property (nonatomic) unsigned long long cellType;
@property (weak, nonatomic) RichTextView *titleLabel;
@property (weak, nonatomic) UIView *lineView;
@property (weak, nonatomic) UILabel *reasonLabel;
@property (nonatomic) unsigned long long rowCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)cellHWithHotWord:(id)a0 cellW:(double)a1;
+ (id)cellID;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setup;
- (void)updateUIWithHotWord:(id)a0 type:(unsigned long long)a1 width:(double)a2;
- (void)layoutSubviews;
- (double)lineWidthAtY:(double)a0 lineIndex:(long long)a1 richTextView:(id)a2;
- (void).cxx_destruct;

@end
