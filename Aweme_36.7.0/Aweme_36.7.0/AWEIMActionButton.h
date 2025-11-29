@class NSDictionary;

@interface AWEIMActionButton : UIButton

@property (nonatomic) unsigned long long style;
@property (copy, nonatomic) NSDictionary *params;

+ (id)buttonWithStyle:(unsigned long long)a0 params:(id)a1;

- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
